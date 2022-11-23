#ifndef MATERIAL_H
#define MATERIAL_H
#pragma once
#include <string>
#include <fstream>
class RowIsNotSelectedException : public std::exception { // виняток,, якщо рядок не вибраний
};
class MaterialsAreEmptyException : public std::exception { //виняток, якщо ліст матеріалів пустий
};

class Material { // матеріал боксу
private:
	std::string name;
public:
	std::string getName();
	double getPrice();
	double price;
	Material(); // конструктор за замовчуванням
	Material(std::string name, double price); // конструктор з параметрами
	Material(Material& material); // конструктор копіювання
	friend std::ofstream& operator << (std::ofstream& file, Material* material); // перевантажена операція запису в файл
	friend std::ifstream& operator >> (std::ifstream& file, Material* material); // перевантажена операція зчитування з файлу
};
#endif