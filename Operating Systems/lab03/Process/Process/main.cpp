#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <tchar.h>
#include <string>
using namespace std;
void createProcess(string path);
int main() {
	string path = "C:\\university\\git\\3-sem\\Operating Systems\\lab03\\TaskAgain\\x64\\Debug\\TaskAgain.exe ";
	createProcess(path);
	return 0;
}
void createProcess(string path) {
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(STARTUPINFO));
	si.cb = sizeof(STARTUPINFO);
	double a = 17.5;
	int number = 8;
	for (int i = 0; i < number; i++) {
		string newPath = path + to_string(a);
		if (!CreateProcess(NULL, (LPSTR)newPath.c_str(), NULL, NULL, FALSE, CREATE_NEW_CONSOLE | CREATE_SUSPENDED, NULL, NULL, &si, &pi)) {
			cout << "The new process is not created. " << endl
				<< "Check a name of the process. " << endl;
			return;
		}
		ResumeThread(pi.hThread);
		Sleep(1000);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
		a += 1.0;
	}
}