#include "Standard.h"
Standard::Standard() {
	number = "0000 0000 0000 0000";
	password = "0000";
	balance = 0;
	commission = 0.05;
}
Standard::Standard(string number, string password) {
	this->number = number;
	this->password = password;
	balance = 0;
	commission = 0.05;
}
bool Standard::transferFunds(double sum) {
	double commission = sum * this->commission;
	if (this->balance - (sum + commission) < 0) {
		return false;
	}
	else {
		this->balance -= (sum + commission);
		return true;
	}
}
bool Standard::withdrawCash(double sum) {
	double commission = sum * this->commission;
	if (this->balance - (sum+commission) < 0) {
		return false;
	}
	else {
		this->balance -= (sum + commission);
		return true;
	}
}
void Standard::topUp(double sum) {
	this->balance += sum;
}
bool Standard::payUtilityBill(double sum) {
	double commission = sum * this->commission;
	if ((this->balance - (sum + commission)) < 0) {
		return false;
	}
	else {
		this->balance -= (sum + commission);
		return true;
	}
}
double Standard::getBalance() const {
	return this->balance;
}
string Standard::print() const {
	return "Standard";
}
void Standard::setBalance(double sum) {
	this->balance += sum;
}

