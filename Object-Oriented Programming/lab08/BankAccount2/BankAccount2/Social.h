#ifndef SOCIAL_H
#define SOCIAL_H
#pragma once
#include "Standard.h"
class Social : public Standard {
protected:
	double bonusPercent;
	string type;
public :
	Social();
	Social(string type);
	Social(string number, string password, string type);
	virtual double getBonuses() const override;
};
#endif

