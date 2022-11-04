#ifndef SOCIAL_H
#define SOCIAL_H
#pragma once
#include "Standard.h"
class Social : public Standard {
protected:
	double bonusPercent;
private:
	string type;
public :
	Social();
	Social(string type);
	Social(string number, string password);
	Social(string number, string password, string type);
	virtual double getBonuses() const;
	void addBonuses(double sum);
	virtual string print() const override;
};
#endif

