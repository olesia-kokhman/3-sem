#include "Material.h"

Material::Material(std::string name, double price) {
	this->name = name;
	this->price = price;
}

bool Material::operator < (const Material& material) const
{
	return this->price < material.price;
}


Material::Material() {

}

std::string Material::getName() {
	return this->name;
}

double Material::getPrice() {
	return this->price;
}

std::ofstream& operator << (std::ofstream& file, Material* material)
{
	file << (material->getName() + " " + std::to_string(material->getPrice()) + '\n');

	return file;
}

std::ifstream& operator >> (std::ifstream& file, Material* material)
{
	file >> material->name;
	file >> material->price;

	return file;
}

Material::Material(Material& material)
{
	name = material.name;
	price = material.price;
}
