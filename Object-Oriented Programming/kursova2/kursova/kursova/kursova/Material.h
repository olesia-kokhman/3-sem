#pragma once
#include <string>
#include <fstream>

class Material
{
	std::string name;
public:
	std::string getName();
	double getPrice();
	double price;
	Material();
	Material(std::string name, double price);
	Material(Material& material);
	friend std::ofstream& operator << (std::ofstream& file, Material* material);
	friend std::ifstream& operator >> (std::ifstream& file, Material* material);
	bool operator <(const Material& material) const;
};

struct MaterialPriceComparator
{
	bool operator ()(const Material* material1, const Material* material2)
	{
		return material1->price < material2->price;
	}
};