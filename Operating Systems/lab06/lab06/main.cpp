#include <pthread.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include <unistd.h>
#include <cstring>

using namespace std;
using namespace std::chrono;

int countThread;
pthread_spinlock_t *spinLock; 
pthread_mutex_t mutexLock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t mutexCond = PTHREAD_COND_INITIALIZER;

pthread_t* threads;
int readyCondition = 0;
void * value_ptr;

typedef struct {
    string* array;
    int size;
} th_param; //структура передачі параметрів

void asyncJob(th_param params);
void spinLockJob(th_param params);
void conditionalVariablesJob(th_param params);
void setPriorityJob(th_param params);

void search(string* array, int start, int end, char value) {
	for (int i = start; i < end; i++) {
		if (array[i][0] == value || array[i][0] == toupper(value) || array[i][0] == tolower(value)) {
			cout << array[i] << " ";
		}
	}
	cout << "END SEARCH\n";
}

void *th_func(void *args) {
    search((string*)((th_param*)args)->array, 0, (int)((th_param*)args)->size, 'z');
    return NULL;
}

void *sleep_th_func(void *args) {
	sleep(1000000);
    search((string*)((th_param*)args)->array, 0, (int)((th_param*)args)->size, 'z');
    return NULL;
}

void *cond_th_func(void *args) {
	pthread_mutex_lock(&mutexLock);
    search((string*)((th_param*)args)->array, 0, (int)((th_param*)args)->size, 'z');
	readyCondition = 1;
	pthread_cond_signal(&mutexCond);
	pthread_mutex_unlock(&mutexLock);
    return NULL;
}

void *spin_th_func(void *args) {
	pthread_spin_lock(spinLock);
    search((string*)((th_param*)args)->array, 0, (int)((th_param*)args)->size, 'z');
 	pthread_spin_unlock(spinLock);
    return NULL;
}

int main() {
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

 	th_param params;
	params.size = size;
	params.array = array;
	threads = new pthread_t[countThread];
	int choice = 0;
	while (true) {
		cout << "Enter number:\n[1] - ASYNCHRONIZATION\n[2] - SPINLOCK\n[3] - CONDITIONAL VARIABLES\n[4] - MEASURE TIME\n[5] - EXIT\n";
		cin >> choice;
		if (choice == 1) {
			cout << "\nEnter number of threads to be created:" << endl;
			cin >> countThread;
			asyncJob(params, true);
		}
		else if (choice == 2) {
			cout << "\nEnter number of threads to be created:" << endl;
			cin >> countThread;
			spinLockJob(params);
		}
		else if (choice == 3) {
			cout << "\nEnter number of threads to be created:" << endl;
			cin >> countThread;
			conditionalVariablesJob(params);
		}
		else if (choice == 4) {
			int countThreadArray[] = { 1,2,4,8,16 };
			for (int i = 0; i < 5; i++) {
				countThread = countThreadArray[i];
				cout << "_______________________________________________________________________________________________________________________" << endl;
				cout << "\t\t\t\t\t\tNUMBER OF THREADS - " << countThread << endl;
				auto start = high_resolution_clock::now();
				asyncJob(params, false)
				auto stop = high_resolution_clock::now();
				auto duration = duration_cast<microseconds>(stop - start);
				cout << "Time taken by ASYNCHRONIZATION: " << duration.count() << " microseconds" << endl;
				auto start2 = high_resolution_clock::now();
				spinLockJob(params);
				auto stop2 = high_resolution_clock::now();
				auto duration2 = duration_cast<microseconds>(stop2 - start2);
				cout << "Time taken by SPIN LOCK: " << duration2.count() << " microseconds" << endl;
				auto start3 = high_resolution_clock::now();
				conditionalVariablesJob(params);
				auto stop3 = high_resolution_clock::now();
				auto duration3 = duration_cast<microseconds>(stop3 - start3);
				cout << "Time taken by CONDITIONAL VARIABLES: " << duration3.count() << " microseconds" << endl;
				cout << "_______________________________________________________________________________________________________________________" << endl;
			}
		}
		else if (choice == 5) {
			break;
		}
	}
	//setPriorityJob(params);

    return 0;
}

void setPriorityJob(th_param params) {
	cout << "Please enter one of the following threads: " << endl;
	for(int i = 0; i < countThread; ++i)
		cout << i << endl;
	int priorityIndex = 2;
	cin >> priorityIndex;

	cout << "Please enter thread priority: " << endl;
	int priority = 10;
	cin >> priority;

    pthread_attr_t thAttr;
	pthread_attr_init(&thAttr);

	int inh = PTHREAD_EXPLICIT_SCHED;
	pthread_attr_setinheritsched(&thAttr, inh);

	int policy = SCHED_FIFO;
	struct sched_param p;
	p.sched_priority = priority;
	pthread_attr_setschedpolicy(&thAttr, policy);

	pthread_attr_getschedpolicy(&thAttr, &policy);
	pthread_attr_setschedparam(&thAttr, &p);

	pthread_attr_getschedpolicy(&thAttr, &policy);
	pthread_attr_getschedparam(&thAttr, &p);

	for(int i = 0; i < countThread; ++i) {
		if(i == priorityIndex) {
			pthread_create(&threads[i], &thAttr, &sleep_th_func, &params);
		} else {
			pthread_create(&threads[i], NULL, &sleep_th_func, &params);
		}
	}

	for(int i = 0; i < countThread; ++i) {
		pthread_join(threads[i], NULL);
	}

	pthread_attr_destroy(&thAttr);


	cout << "Policy: " << policy << endl;
}

void conditionalVariablesJob(th_param params) {
	for(int i = 0; i < countThread; ++i) {
		pthread_create(&threads[i], NULL, &cond_th_func, &params);
		while (readyCondition == 0) {
			pthread_cond_wait(&mutexCond, &mutexLock);
		}
		pthread_mutex_unlock(&mutexLock);
		readyCondition = 0;
	}


}

void spinLockJob(th_param params) {
	spinLock = (pthread_spinlock_t*) malloc(sizeof(pthread_spinlock_t));
 
    pthread_spin_init(spinLock, 0);

	for(int i = 0; i < countThread; ++i) {
		pthread_create(&threads[i], NULL, &spin_th_func, &params);
	}

	for(int i = 0; i < countThread; ++i) {
		pthread_join(threads[i], NULL);
	}

	pthread_spin_destroy(spinLock);
}

void asyncJob(th_param params, bool access) {
	if (access) {
		while (true) {
			int number = 0;
			cout << "Enter number:\n[1] - CHANGE PRIORITY\n[2] - DETACH\n[3] - CANCEL\n[4] - EXIT\n";
			cin >> number;
			if (number == 1) {
				cout << "undefined" << endl;
			}
			else if (number == 2) {
				int numberOfThread = 0;
				cout << "enter number of thread:" << endl;
				cin >> numberOfThread;
				for (int i = 0; i < countThread; ++i) {
					pthread_create(&threads[i], NULL, &th_func, &params);
				}
				if (pthread_detach(threads[numberOfThread]) == 0) {
					cout << "thread " << numberOfThread << " was detached" << endl;
				}
			}
			else if (number == 3) {
				int numberOfThread = 0;
				cout << "enter number of thread:" << endl;
				cin >> numberOfThread;
				for (int i = 0; i < countThread; ++i) {
					pthread_create(&threads[i], NULL, &th_func, &params);
				}
				if (pthread_cancel(threads[numberOfThread]) == 0) {
					cout << "thread " << numberOfThread << " was cancelled" << endl;
				}
			}
			else if (number == 4) {
				break;
			}
			
		}
	}
	else {
		for (int i = 0; i < countThread; ++i) {
			pthread_create(&threads[i], NULL, &th_func, &params);
		}
		for (int i = 0; i < countThread; ++i) {
			pthread_join(threads[i], NULL);
		}
	}
	
}

// DWORD WINAPI mythread(__in LPVOID lpParameter) {
// 	fstream file;
// 	string word, filename;
// 	filename = "myfile.txt";
// 	file.open(filename.c_str());
// 	int size = 0;
// 	while (file >> word) {
// 		size++;
// 	}
// 	file.close();
// 	string* array = new string[size];
// 	file.open(filename.c_str());
// 	int i = 0;
// 	while (file >> word) {
// 		array[i] = word;
// 		i++;
// 	}
// 	search(array, 0, i, 'z');
// 	ExitThread(0);
// }
// DWORD WINAPI mythread2(__in LPVOID lpParameter) {
// 	EnterCriticalSection(&cs);
// 	fstream file;
// 	string word, filename;
// 	filename = "myfile.txt";
// 	file.open(filename.c_str());
// 	int size = 0;
// 	while (file >> word) {
// 		size++;
// 	}
// 	file.close();
// 	string* array = new string[size];
// 	file.open(filename.c_str());
// 	int i = 0;
// 	while (file >> word) {
// 		array[i] = word;
// 		i++;
// 	}
// 	search(array, 0, i, 'z');
// 	LeaveCriticalSection(&cs);
// 	ExitThread(0);
// }

// int main(int argc, char* argv[]) {
// 	int choice = 0;
// 	while (true) {
// 		cout << "Enter number:\n[1] - ASYNCHRONIZATION\n[2] - CRITICAL SECTION\n[3] - WAITABLE TIMER\n[4] - MEASURE TIME\n[5] - EXIT\n";
// 		cin >> choice;
// 		if (choice == 1) {
// 			cout << "\nEnter number of threads to be created:" << endl;
// 			cin >> countThread;
// 			asyncJob(true);
// 		}
// 		else if (choice == 2) {
// 			cout << "\nEnter number of threads to be created:" << endl;
// 			cin >> countThread;
// 			criticalJob();
// 		}
// 		else if (choice == 3) {
// 			cout << "\nEnter number of threads to be created:" << endl;
// 			cin >> countThread;
// 			timerJob();
// 		}
// 		else if (choice == 4) {
// 			int countThreadArray[] = {1,2,4,8,16};
// 			for (int i = 0; i < 5; i++) {
// 				countThread = countThreadArray[i];
// 				cout << "_______________________________________________________________________________________________________________________" << endl;
// 				cout << "\t\t\t\t\t\tNUMBER OF THREADS - " << countThread << endl;
// 				auto start = high_resolution_clock::now();
// 				asyncJob(false);
// 				auto stop = high_resolution_clock::now();
// 				auto duration = duration_cast<microseconds>(stop - start);
// 				cout << "Time taken by ASYNCHRONIZATION: " << duration.count() << " microseconds" << endl;
// 				auto start2 = high_resolution_clock::now();
// 				criticalJob();
// 				auto stop2 = high_resolution_clock::now();
// 				auto duration2 = duration_cast<microseconds>(stop2 - start2);
// 				cout << "Time taken by CRITICAL SECTION: " << duration2.count() << " microseconds" << endl;
// 				auto start3 = high_resolution_clock::now();
// 				timerJob();
// 				auto stop3 = high_resolution_clock::now();
// 				auto duration3 = duration_cast<microseconds>(stop3 - start3);
// 				cout << "Time taken by WAITABLE TIMER: " << duration3.count() << " microseconds" << endl;
// 				cout << "_______________________________________________________________________________________________________________________" << endl;
// 			}
// 		}
// 		else if (choice == 5) {
// 			break;
// 		}
// 	}
// 	return 0;
// }
// void asyncJob(bool access) {
// 	HANDLE* myHandle;
// 	DWORD* threadID;
// 	myHandle = new HANDLE[countThread];
// 	threadID = new DWORD[countThread];
// 	for (int i = 0; i < countThread; i++) {
// 		myHandle[i] = CreateThread(NULL, 0, mythread, 0, CREATE_SUSPENDED, &threadID[i]);
// 	}

// 	if (myHandle == NULL) {
// 		return;
// 	}
// 	else {
// 		for (int i = 0; i < countThread; i++) {
// 			cout << i << " tid - " << threadID[i] << endl;
// 		}
// 	}
// 	if (access) {
// 		while (true) {
// 			int number = 0;
// 			cout << "Enter number:\n[1] - RESUME\n[2] - SUSPEND\n[3] - CHANGE PRIORITY\n[4] - KILL\n[5] - EXIT\n";
// 			cin >> number;
// 			if (number == 1) {
// 				int threadNumber = 0;
// 				cout << "enter number of thread to resume" << endl;
// 				cin >> threadNumber;
// 				ResumeThread(myHandle[threadNumber]);
// 				WaitForSingleObject(myHandle[threadNumber], INFINITE);
// 				cout << "thread was resumed - " << threadID[threadNumber] << endl;
// 			}
// 			else if (number == 2) {
// 				int threadNumber = 0;
// 				cout << "enter number of thread to suspend" << endl;
// 				cin >> threadNumber;
// 				SuspendThread(myHandle[threadNumber]);
// 				cout << "thread was suspended - " << threadID[threadNumber] << endl;
// 			}
// 			else if (number == 3) {
// 				int threadNumber = 0;
// 				cout << "enter number of thread to change priority" << endl;
// 				cin >> threadNumber;
// 				int newPriority = 0;
// 				cout << "old priority - " << GetThreadPriority(myHandle[threadNumber]) << " tid - " << threadID[threadNumber] << endl;
// 				cout << "enter new priority:\n[0] - THREAD_PRIORITY_IDLE" <<
// 					"\n[1] - THREAD_PRIORITY_LOWEST" <<
// 					"\n[2] - THREAD_PRIORITY_BELOW_NORMAL" <<
// 					"\n[3] - THREAD_PRIORITY_NORMAL" <<
// 					"\n[4] - THREAD_PRIORITY_ABOVE_NORMAL" <<
// 					"\n[5] - THREAD_PRIORITY_HIGHEST" <<
// 					"\n[6] - THREAD_PRIORITY_TIME_CRITICAL" << endl;
// 				cin >> newPriority;
// 				int priorityArray[] = { THREAD_PRIORITY_IDLE,
// 										THREAD_PRIORITY_LOWEST,
// 										THREAD_PRIORITY_BELOW_NORMAL,
// 										THREAD_PRIORITY_NORMAL,
// 										THREAD_PRIORITY_ABOVE_NORMAL,
// 										THREAD_PRIORITY_HIGHEST,
// 										THREAD_PRIORITY_TIME_CRITICAL };

// 				if (SetThreadPriority(myHandle[threadNumber], priorityArray[newPriority]) != 0) {
// 					cout << "new priority - " << GetThreadPriority(myHandle[threadNumber]) << " tid - " << threadID[threadNumber] << endl;
// 				}
// 			}
// 			else if (number == 4) {
// 				int threadNumber = 0;
// 				cout << "enter number of thread to kill" << endl;
// 				cin >> threadNumber;
// 				TerminateThread(myHandle[threadNumber], 0);
// 				cout << "thread was killed - " << threadID[threadNumber] << endl;
// 			}
// 			else if (number == 5) {
// 				break;
// 			}
// 		}
// 	}
// 	else {
// 		for (int i = 0; i < countThread; i++) {
// 			ResumeThread(myHandle[i]);
// 		}
// 		for (int i = 0; i < countThread; i++) {
// 			WaitForSingleObject(myHandle[i], INFINITE);
// 			CloseHandle(myHandle[i]);
// 		}
// 	}
// }

// void criticalJob() {
// 	HANDLE* myHandle;
// 	DWORD* threadID;
// 	myHandle = new HANDLE[countThread];
// 	threadID = new DWORD[countThread];
// 	InitializeCriticalSection(&cs);
// 	for (int i = 0; i < countThread; i++) {
// 		myHandle[i] = CreateThread(NULL, 0, mythread2, 0, CREATE_SUSPENDED, &threadID[i]);
// 	}
// 	if (myHandle == NULL) {
// 		return;
// 	}
// 	else {
// 		for (int i = 0; i < countThread; i++) {
// 			cout << "tid - " << threadID[i] << endl;
// 		}
// 	}
// 	for (int i = 0; i < countThread; i++) {
// 		ResumeThread(myHandle[i]);
// 	}
// 	for (int i = 0; i < countThread; i++) {
// 		WaitForSingleObject(myHandle[i], INFINITE);
// 		CloseHandle(myHandle[i]);
// 	}
// 	DeleteCriticalSection(&cs);
// }

// void timerJob() {
// 	BOOL bSetWaitableTimer = FALSE;
// 	LARGE_INTEGER liDueTime;
// 	liDueTime.QuadPart = -00000000LL;
// 	hTimer = CreateWaitableTimer(NULL, TRUE, NULL);
// 	if (hTimer == NULL) {
// 		return;
// 	}
// 	HANDLE* thread;
// 	DWORD* tid;
// 	thread = new HANDLE[countThread];
// 	tid = new DWORD[countThread];
// 	for (int i = 0; i < countThread; i++) {
// 		thread[i] = CreateThread(NULL, 0, mythread, 0, CREATE_SUSPENDED, &tid[i]);
// 	}
// 	for (int i = 0; i < countThread; i++) {
// 		cout << "tid - " << tid[i] << endl;
// 	}
// 	bSetWaitableTimer = SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0);
// 	if (bSetWaitableTimer == FALSE) {
// 		return;
// 	}
// 	dWaitForSingleObject = WaitForSingleObject(hTimer, INFINITE);
// 	if (dWaitForSingleObject == WAIT_FAILED) {
// 		return;
// 	}
// 	for (int i = 0; i < countThread; i++) {
// 		ResumeThread(thread[i]);
// 		WaitForSingleObject(thread[i], INFINITE);

// 	}

// 	CloseHandle(hTimer);
// 	for (int i = 0; i < countThread; i++) {
// 		CloseHandle(thread[i]);
// 	}
// }

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
