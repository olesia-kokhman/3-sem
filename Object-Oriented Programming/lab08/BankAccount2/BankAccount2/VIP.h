#ifndef VIP_H
#define VIP_H
#include "Social.h"
class VIP : protected Social {
private:
	double creditLimit;
	double creditPercent;
	double generalCredit;
public:
	VIP();
	VIP(string _number, string _password);
	double getGeneralCredit() const;
	void takeCredit(double sum);
	void repayCredit(double sum);
	using Social::getBalance;
	virtual double getBonuses() const;
	using Social::addBonuses;
	using Social::topUp;
	using Social::transferFunds;
	using Social::withdrawCash;
	using Social::payUtilityBill;
	virtual string print() const override;
};
#endif
