#include "Social.h"
Social::Social() {
	Standard();
	this->type = "benefit"; // student, pensioner, parent, orphan, benefit 
	this->bonusPercent = 0.05;
	this->commission = 0;
}
Social::Social(string type) {
	Standard();
	this->type = type;
	this->bonusPercent = 0.05;
	this->commission = 0;
}
Social::Social(string number, string password, string type) {
	Standard(number, password);
	this->type = type;
	this->bonusPercent = 0.05;
	this->commission = 0;
}
double Social::getBonuses() const {
	if (balance >= 1000 && (int)balance % 1000 == 0) {
		return balance * bonusPercent;
	}
	else {
		return 0;
	}
}
