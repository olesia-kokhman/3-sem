#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>
#include <cmath>
#define DEF_THREAD_COUNT 4
const int N = 50000000;
namespace MCConcurrency
{
	inline int threadsCount(int iterationsCount = -1)
	{
		int numThreads = static_cast<int>(std::thread::hardware_concurrency());
		if (numThreads == 0)
			numThreads = DEF_THREAD_COUNT;
		if (iterationsCount == 0)
			return 1;
		if (iterationsCount > -1)
			numThreads = std::min(static_cast<int>(numThreads), iterationsCount);
		return numThreads;
	}
	template<typename Function>
	void parallel_for(int first, int last, int threadsNumbers, const Function& l)
	{
		int numThreads = threadsNumbers;
		int elementsCount = last - first;
		//auto numThreads = threadsCount(last - first);
		if (numThreads <= 0)
			return;
		int threadNumber = 0;
		std::mutex tasksMutex;
		std::vector<std::thread> threads;
		const auto chunk = std::max(static_cast<int>(std::ceil(elementsCount /
			static_cast<double>(numThreads))), 1);
		for (int i = 0; i < numThreads; i++)
		{
			threads.push_back(std::thread([&]()
				{
					int thread_number;
					tasksMutex.lock();
					thread_number = threadNumber;
					++threadNumber;
					tasksMutex.unlock();
					int beg = first + thread_number * chunk;
					int end = std::min(first + (thread_number + 1) * chunk, elementsCount);
					for (int ind = beg; ind < end; ind++)
					{
						l(ind, thread_number);
					}
				}));
		}
		std::for_each(begin(threads), end(threads), [](std::thread& th) {
					th.join();
			});
	}
}
int main()
{
	typedef std::chrono::high_resolution_clock Time;
	typedef std::chrono::milliseconds ms;
	typedef std::chrono::duration<float> fsec;
	std::vector<float> arr(N);
	auto numThreads = MCConcurrency::threadsCount(N);
	std::cout << "Set process af inity (cores count) and press <Enter>";
	getchar();
	auto t0 = Time::now();
	MCConcurrency::parallel_for(0, N, numThreads, [&](int nIndex, int threadNumber) {
		arr[nIndex] = sin(threadNumber) * cos(threadNumber);
		});
	auto t1 = Time::now();
	fsec fs = t1 - t0;
	ms d = std::chrono::duration_cast<ms>(fs);
	std::cout << "Duration: " << d.count() << "ms\n";
	return 0;
}