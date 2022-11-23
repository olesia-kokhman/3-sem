#pragma once

#include "Box.h"
#include "Material.h"

class Order
{
private:
	Box* box;
	Material* material;
	double calculateSquare();
public:
	double calculateMaterialPrice();
	double calculateCosts(double utilityRate, double salaryRate, double taxRate);
	double calculateBoxCost(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice);
	double calculateBoxPrice(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice);
	double calculateBoxIncome(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice);
	double calculateIncomePerMonth(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice, int countOfBoxes);
	Order(Box* box, Material* material);
};

