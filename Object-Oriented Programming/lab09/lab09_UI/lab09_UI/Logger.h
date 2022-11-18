#ifndef LOGGER_H
#define LOGGER_H
#pragma once
#include <iostream>
using namespace std;
class Logger {
protected:
	void log(string identifier) {
		cout << "There was executed action: " << identifier << endl;
	 }
};
#endif

