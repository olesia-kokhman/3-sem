#include "Standard.h"
Standard::Standard()  {
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
	if (this->balance - sum < 0) {
		return false;
	}
	else {
		this->balance -= sum;
		return true;
	}
}
bool Standard::withdrawCash(double sum) {
	if (this->balance - sum < 0) {
		return false;
	}
	else {
		this->balance -= sum;
		return true;
	}
}
void Standard::topUp(double sum) {
	this->balance += sum;
}
bool Standard::payUtilityBill(double sum) {
	int commission = sum * this->commission / 100;
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
static std::string toStandardString(System::String^ string) {
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);
	return returnString;
}

