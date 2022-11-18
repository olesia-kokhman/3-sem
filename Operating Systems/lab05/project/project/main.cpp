#include <Windows.h>
#include <iostream>
#include <fstream>
#include <chrono>
void criticalJob();
void asyncJob(bool access);
void timerJob();
using namespace std;
using namespace std::chrono;
CRITICAL_SECTION cs;
HANDLE hTimer;
DWORD dWaitForSingleObject;
int countThread = 8;
void search(string* array, int start, int end, char value) {
	for (int i = start; i < end; i++) {
		if (array[i][0] == value || array[i][0] == toupper(value) || array[i][0] == tolower(value)) {
			cout << array[i] << " ";
		}
	}
	cout << "\n";
}
DWORD WINAPI mythread(__in LPVOID lpParameter) {
	fstream file;
	string word, filename;
	filename = "myfile.txt";
	file.open(filename.c_str());
	int size = 0;
	while (file >> word) {
		size++;
	}
	file.close();
	string* array = new string[size];
	file.open(filename.c_str());
	int i = 0;
	while (file >> word) {
		array[i] = word;
		i++;
	}
	search(array, 0, i, 'z');
	ExitThread(0);
}
DWORD WINAPI mythread2(__in LPVOID lpParameter) {
	EnterCriticalSection(&cs);
	fstream file;
	string word, filename;
	filename = "myfile.txt";
	file.open(filename.c_str());
	int size = 0;
	while (file >> word) {
		size++;
	}
	file.close();
	string* array = new string[size];
	file.open(filename.c_str());
	int i = 0;
	while (file >> word) {
		array[i] = word;
		i++;
	}
	search(array, 0, i, 'z');
	LeaveCriticalSection(&cs);
	ExitThread(0);
}

int main(int argc, char* argv[]) {
	int choice = 0;
	while (true) {
		cout << "Enter number:\n[1] - ASYNCHRONIZATION\n[2] - CRITICAL SECTION\n[3] - WAITABLE TIMER\n[4] - MEASURE TIME\n[5] - EXIT\n";
		cin >> choice;
		if (choice == 1) {
			cout << "\nEnter number of threads to be created:" << endl;
			cin >> countThread;
			asyncJob(true);
		}
		else if (choice == 2) {
			cout << "\nEnter number of threads to be created:" << endl;
			cin >> countThread;
			criticalJob();
		}
		else if (choice == 3) {
			cout << "\nEnter number of threads to be created:" << endl;
			cin >> countThread;
			timerJob();
		}
		else if (choice == 4) {
			int countThreadArray[] = {1,2,4,8,16};
			for (int i = 0; i < 5; i++) {
				countThread = countThreadArray[i];
				cout << "_______________________________________________________________________________________________________________________" << endl;
				cout << "\t\t\t\t\t\tNUMBER OF THREADS - " << countThread << endl;
				auto start = high_resolution_clock::now();
				asyncJob(false);
				auto stop = high_resolution_clock::now();
				auto duration = duration_cast<microseconds>(stop - start);
				cout << "Time taken by ASYNCHRONIZATION: " << duration.count() << " microseconds" << endl;
				auto start2 = high_resolution_clock::now();
				criticalJob();
				auto stop2 = high_resolution_clock::now();
				auto duration2 = duration_cast<microseconds>(stop2 - start2);
				cout << "Time taken by CRITICAL SECTION: " << duration2.count() << " microseconds" << endl;
				auto start3 = high_resolution_clock::now();
				timerJob();
				auto stop3 = high_resolution_clock::now();
				auto duration3 = duration_cast<microseconds>(stop3 - start3);
				cout << "Time taken by WAITABLE TIMER: " << duration3.count() << " microseconds" << endl;
				cout << "_______________________________________________________________________________________________________________________" << endl;
			}
		}
		else if (choice == 5) {
			break;
		}
	}
	return 0;
}
void asyncJob(bool access) {
	HANDLE* myHandle;
	DWORD* threadID;
	myHandle = new HANDLE[countThread];
	threadID = new DWORD[countThread];
	for (int i = 0; i < countThread; i++) {
		myHandle[i] = CreateThread(NULL, 0, mythread, 0, CREATE_SUSPENDED, &threadID[i]);
	}

	if (myHandle == NULL) {
		return;
	}
	else {
		for (int i = 0; i < countThread; i++) {
			cout << i << " tid - " << threadID[i] << endl;
		}
	}
	if (access) {
		while (true) {
			int number = 0;
			cout << "Enter number:\n[1] - RESUME\n[2] - SUSPEND\n[3] - CHANGE PRIORITY\n[4] - KILL\n[5] - EXIT\n";
			cin >> number;
			if (number == 1) {
				int threadNumber = 0;
				cout << "enter number of thread to resume" << endl;
				cin >> threadNumber;
				ResumeThread(myHandle[threadNumber]);
				WaitForSingleObject(myHandle[threadNumber], INFINITE);
				cout << "thread was resumed - " << threadID[threadNumber] << endl;
			}
			else if (number == 2) {
				int threadNumber = 0;
				cout << "enter number of thread to suspend" << endl;
				cin >> threadNumber;
				SuspendThread(myHandle[threadNumber]);
				cout << "thread was suspended - " << threadID[threadNumber] << endl;
			}
			else if (number == 3) {
				int threadNumber = 0;
				cout << "enter number of thread to change priority" << endl;
				cin >> threadNumber;
				int newPriority = 0;
				cout << "old priority - " << GetThreadPriority(myHandle[threadNumber]) << " tid - " << threadID[threadNumber] << endl;
				cout << "enter new priority:\n[0] - THREAD_PRIORITY_IDLE" <<
					"\n[1] - THREAD_PRIORITY_LOWEST" <<
					"\n[2] - THREAD_PRIORITY_BELOW_NORMAL" <<
					"\n[3] - THREAD_PRIORITY_NORMAL" <<
					"\n[4] - THREAD_PRIORITY_ABOVE_NORMAL" <<
					"\n[5] - THREAD_PRIORITY_HIGHEST" <<
					"\n[6] - THREAD_PRIORITY_TIME_CRITICAL" << endl;
				cin >> newPriority;
				int priorityArray[] = { THREAD_PRIORITY_IDLE,
										THREAD_PRIORITY_LOWEST,
										THREAD_PRIORITY_BELOW_NORMAL,
										THREAD_PRIORITY_NORMAL,
										THREAD_PRIORITY_ABOVE_NORMAL,
										THREAD_PRIORITY_HIGHEST,
										THREAD_PRIORITY_TIME_CRITICAL };

				if (SetThreadPriority(myHandle[threadNumber], priorityArray[newPriority]) != 0) {
					cout << "new priority - " << GetThreadPriority(myHandle[threadNumber]) << " tid - " << threadID[threadNumber] << endl;
				}
			}
			else if (number == 4) {
				int threadNumber = 0;
				cout << "enter number of thread to kill" << endl;
				cin >> threadNumber;
				TerminateThread(myHandle[threadNumber], 0);
				cout << "thread was killed - " << threadID[threadNumber] << endl;
			}
			else if (number == 5) {
				break;
			}
		}
	}
	else {
		for (int i = 0; i < countThread; i++) {
			ResumeThread(myHandle[i]);
		}
		for (int i = 0; i < countThread; i++) {
			WaitForSingleObject(myHandle[i], INFINITE);
			CloseHandle(myHandle[i]);
		}
	}
}

void criticalJob() {
	HANDLE* myHandle;
	DWORD* threadID;
	myHandle = new HANDLE[countThread];
	threadID = new DWORD[countThread];
	InitializeCriticalSection(&cs);
	for (int i = 0; i < countThread; i++) {
		myHandle[i] = CreateThread(NULL, 0, mythread2, 0, CREATE_SUSPENDED, &threadID[i]);
	}
	if (myHandle == NULL) {
		return;
	}
	else {
		for (int i = 0; i < countThread; i++) {
			cout << "tid - " << threadID[i] << endl;
		}
	}
	for (int i = 0; i < countThread; i++) {
		ResumeThread(myHandle[i]);
	}
	for (int i = 0; i < countThread; i++) {
		WaitForSingleObject(myHandle[i], INFINITE);
		CloseHandle(myHandle[i]);
	}
	DeleteCriticalSection(&cs);
}

void timerJob() {
	BOOL bSetWaitableTimer = FALSE;
	LARGE_INTEGER liDueTime;
	liDueTime.QuadPart = -00000000LL;
	hTimer = CreateWaitableTimer(NULL, TRUE, NULL);
	if (hTimer == NULL) {
		return;
	}
	HANDLE* thread;
	DWORD* tid;
	thread = new HANDLE[countThread];
	tid = new DWORD[countThread];
	for (int i = 0; i < countThread; i++) {
		thread[i] = CreateThread(NULL, 0, mythread, 0, CREATE_SUSPENDED, &tid[i]);
	}
	for (int i = 0; i < countThread; i++) {
		cout << "tid - " << tid[i] << endl;
	}
	bSetWaitableTimer = SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0);
	if (bSetWaitableTimer == FALSE) {
		return;
	}
	dWaitForSingleObject = WaitForSingleObject(hTimer, INFINITE);
	if (dWaitForSingleObject == WAIT_FAILED) {
		return;
	}
	for (int i = 0; i < countThread; i++) {
		ResumeThread(thread[i]);
		WaitForSingleObject(thread[i], INFINITE);

	}

	CloseHandle(hTimer);
	for (int i = 0; i < countThread; i++) {
		CloseHandle(thread[i]);
	}
}

// CRITICAL SECTION
//  
// HANDLE handle;
// DWORD tid;
// InitialiseCriticalSection(&cs);
// CreateThread();
// EnterCriticalSection(&cs);
// LeaveCriticalSection(&cs);
// WaitForSingleObject();
// CloseHandle();
// DeleteCriticalSection();

// WAITABLE TIMER
// 
// HANDLE hTimer;
// BOOL bSetWaitableTimer = FALSE;
// DWORD dWaitForSingleObject;
// LANGE_INTEGER liDueTime;
// liDueTime.QuadPart = -50000000LL;
// hTimer = CreateWaitableTimer(NULL, TRUE, NULL);
// if(hTimer == NULL) {
//     return 1;
// }
// bSetWaitableTimer = SetWaitableTimer(hTimer, &liDueTiime, 0, NULL, NULL, 0);
// if(bSetWaitableTimer == FALSE) { 
//     return 1;
// }
// dWaitForSingleObject = WaitForSingleObject(hTimer, INFINITE);
// if(dWaitForSingleObject == WAIT_FAILED) {
//     return 1;
// }
// CloseHandle(hTimer);
