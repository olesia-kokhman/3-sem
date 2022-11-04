#include <iostream>
#include <unistd.h>
#include <sys/wait.h> 
#include <csignal> 
#include <sys/resource.h> 
#include <chrono> 
#include <string> 
#define MAX_NUM_PROC 8 
using namespace std; 
int main() {
	pid_t PIDs[MAX_NUM_PROC];
	int numberOfProcesses;
	double MinInter, MaxInter, step, accuracy;
	int NumSteps;
	cout << "\nEnter number of processes to create: ";
	cin >> numberOfProcesses;
	cout << "Enter A: ";
	cin >> MinInter;
	cout << "Enter B: ";
	cin >> MaxInter;
	cout << "Enter step: ";
	cin >> step;
	cout << "Enter accuracy: ";
	cin >> accuracy;
	for (int i = 0; i < numberOfProcesses; ++i) {
		string A = to_string(MinInter);
		string B = to_string(MaxInter);
		string Step = to_string(step);
		string Accuracy = to_string(accuracy);
		PIDs[i] = fork();
		switch (PIDs[i]) {
		case -1:
			cout << "Fork error.Something went wrong!";
			break;
		case 0:
			execl("//home//olesia//Documents//taylor", "//home//olesia//Documents//taylor", A.c_str(), B.c_str(),
				Step.c_str(), Accuracy.c_str(), ((char*)NULL));
			break;
		default: //parent
		{ 
			kill(PIDs[i], SIGSTOP);
		cout << "The " << i + 1 << " process PID:" << PIDs[i] << "\nMain process PID: " << getpid() << "\n";
		}
		}
	}
	pid_t wpid;
	int status = 0;
	while (1) {
		int choice;
		cout << "\n Measure time (1) Change priority (2) Stop process (3) Resume process (4) Kill process (5)\n";
		cin >> choice;
		switch (choice) {
		case 1: {
			const auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < numberOfProcesses; ++i) {
				kill(PIDs[i], SIGCONT);
			}
			while ((wpid = wait(&status)) > 0);
			auto time = chrono::high_resolution_clock::now() - start;
			cout << "\nDuration of " << numberOfProcesses << " processes: " << chrono::duration<double, milli>(time).count() * 0.001 << " s\n";
			return 0;
		}
		case 2: {
		int num = 0;
		int pr = 0;
		cout << "\nEnter process number to change priority: ";
		cin >> num;
		cout << "\nEnter new number of priority: ";
		cin >> pr;
		setpriority(PRIO_PROCESS, PIDs[num - 1], pr);
		cout <<
			"\nNew priority: " << getpriority(PRIO_PROCESS, PIDs[num - 1]);
		break;
		}
		case 3: {
			int num = 0;
			cout << "Enter process number to stop: ";
			cin >> num;
			if (!kill(PIDs[num - 1], 19)) //сигнал SIGSTOP 
			{
				cout << "\nThe " << num << " process was successfully stopped.\n";
			}
			else {
				cout << "\nError! Something went wrong.\n";
			}
			break;
		}
		case 4: {
			int num = 0;
			cout << "Enter process number to resume: ";
			cin >> num;
			if (!kill(PIDs[num - 1], 18)) //сигнал SIGCONT
			{
				cout << "\nThe " << num << " process was successfully resumed.\n";
			}
			else {
				cout << "\nError! Something went wrong.\n";
			}
			break;
		}
		case 5: {
			int num;
			cout << "\nEnter number of process to kill: ";
			cin >> num; kill(PIDs[num - 1], SIGKILL);
			PIDs[num - 1] = -1;
			cout << "\nThe " << num << " process was killed.";
		}
		}
	} wait(NULL);
	return 0;
}
