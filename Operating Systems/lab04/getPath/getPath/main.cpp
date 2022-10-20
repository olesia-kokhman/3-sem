/**#include <string>
#include <windows.h>
#include <iostream>
std::string getexepath()
{
	char result[MAX_PATH];
	return std::string(result, GetModuleFileName(NULL, (LPSTR)result, MAX_PATH));
}
int main() {
	std::cout << getexepath() << std::endl;
	return 0;
}*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/resource.h>
#include <string.h>
int main() {
	std::cout << "PID main process=" << getpid() << std::endl;
	int CountProc;
	double A = -0.5, B = 0.5, step = 0.05, accuracy = 0.00000001;
	std::cout << "\nEnter amount of process: ";
	std::cin >> CountProc;
	int status;
	clock_t start, finish;
	pid_t PID[8];
	double total_time[8];
	for (int i = 0; i < CountProc; ++i) {
		PID[i] = fork();
		switch (PID[i]) {
		case 0:
			execlp("//home//olesia//Documents//taylor.cpp", "//home//olesia//Documents//taylor.cpp", std::to_string(A).c_str(), std::to_string(B).c_str(), std::to_string(step).c_str(), std::to_string(accuracy).c_str());
			break;
		case -1:
			perror("Fork");
			break;
			while (1) {
				int choice;
				std::cout << "\n\nRun All [1] | Change Priority [2] | Run Individually [3]\n";
				std::cin >> choice;
				switch (choice) {
				case 1: {
					for (int i = 0; i < CountProc; ++i) {
						kill(PID[i], SIGCONT);
						sleep(1);
					}
					wait(&status);
					return 0;
				}
				case 2: {
					int num;
					int pr = 2;
					std::cout << "\nEnter proces number: ";
					std::cin >> num;
					num--;
					std::cout << "\nEnter new prority: ";
					std::cin >> pr;
					setpriority(PRIO_PROCESS, PID[num], pr);
					std::cout << "\nNew priority is " << getpriority(PRIO_PROCESS, PID[num]);
					break;
				}
				}
			}
			wait(&status);
			return 0;
		}
	}
}