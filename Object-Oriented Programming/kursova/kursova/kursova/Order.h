#ifndef ORDER_H
#define ORDER_H
#pragma once
#include "Box.h"
#include "Material.h"
class Order { // клас-замовлення
private:
	Box* box;
	Material* material;
	double calculateSquare();
public:
	Order(Box* box, Material* material);
	double calculateMaterialPrice();
	double calculateCosts(double utilityRate, double salaryRate, double taxRate);
	double calculateBoxCost(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice);
	double calculateBoxPrice(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice);
	double calculateBoxIncome(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice);
	double calculateIncomePerMonth(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice, int countOfBoxes);
	
};
#endif

