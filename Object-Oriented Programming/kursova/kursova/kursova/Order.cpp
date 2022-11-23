#include "Order.h"

Order::Order(Box* box, Material* material) {
	this->box = box;
	this->material = material;
}

double Order::calculateSquare() {
	double topAndBottom = 2 * (box->width * box->depth);
	double walls = 4 * box->depth * box->height;
	double wallsFastening = box->height * (double)box->height / 10.0;
	double leftSmallSide = box->depth * (double)box->width / 5.2;
	return (topAndBottom + walls + wallsFastening + leftSmallSide) / 100.0;
} // вираховує площу 

double Order::calculateMaterialPrice() { // підраховує ціну матеріалу
	return calculateSquare() * material->getPrice();
}

double Order::calculateCosts(double utilityRate, double salaryRate, double taxRate) { // підраховує витрати на комунальні послуги, податки та зарплату
	return calculateSquare() * (utilityRate + salaryRate + taxRate);
}

double Order::calculateBoxCost(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice) { 
	return calculateCosts(utilityRate, salaryRate, taxRate) + calculateMaterialPrice() + equipmentDeprecationPrice * 0.13567;
} // підраховує ціну коробки в залежності від комунальних послуг, податків, зарплати та амортизації обладнання

double Order::calculateBoxPrice(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice) {
	return calculateBoxCost(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice) * 1.1;
}
// підраховує ціну коробки для клієнта

double Order::calculateBoxIncome(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice) {
	return calculateBoxPrice(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice) * 0.1;
} // підраховує дохід

double Order::calculateIncomePerMonth(double utilityRate, double salaryRate, double taxRate, double equipmentDeprecationPrice, int countOfBoxes) {
	return calculateBoxIncome(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice) * countOfBoxes;
} // підраховує дохід за місяць

