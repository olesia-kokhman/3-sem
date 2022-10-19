#ifndef STANDARD_H
#define STANDARD_H
#pragma once
#include <string>
using namespace std;
std::string toStandardString(System::String^ string);
class Standard {
protected:
	string number; 
	string password;
	double balance;
	double commission;
public:
	Standard();
	Standard(string number, string password);
	bool transferFunds(double sum);
	bool withdrawCash(double sum);
	void topUp(double sum);
	bool payUtilityBill(double sum);
	double getBalance() const;
	string print() const;
};
#endif
//Звичайний (стандартна комісія на оплату комунальних послуг, перерахунок на інший рахунок, зняття готівки).

