#include "VIP.h"
VIP::VIP() {
	Social();
	this->creditLimit = 50000;
	this->creditPercent = 20;
	this->generalCredit = 0;
	this->bonusPercent = 0.1;
};
VIP::VIP(string _number, string _password) {
	Social(_number, _password);
	this->creditLimit = 50000;
	this->creditPercent = 20;
	this->generalCredit = 0;
	this->bonusPercent = 0.1;
}
double VIP::getBonuses() const {
	if (balance >= 10000 && (int)balance % 1000 == 0) {
		return balance * bonusPercent;
	}
	else if (balance >= 1000 && (int)balance % 1000 == 0) {
		double bonusPercent2 = 0.05;
		return balance* bonusPercent2;
	}
	else {
		return 0;
	}
}
void VIP::takeCredit(double sum) {
	if (creditLimit - sum >= 0) {
		generalCredit += (sum * creditPercent / 100) + sum;
		creditLimit -= sum;
		balance += sum;
	}
	else {
		return;
	}
}
void VIP::repayCredit(double sum) {
	if (generalCredit - sum >= 0 && balance-sum >=0) {
		generalCredit -= sum;
		creditLimit += sum;
		balance -= sum;
	}
	else {
		return;
	}
}
string VIP::print() const {
	return "VIP";
}
double VIP::getGeneralCredit() const {
	return generalCredit;
}