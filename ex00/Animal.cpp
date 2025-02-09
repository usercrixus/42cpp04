#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(Animal &cpy)
{
	this->type = cpy.getType();
	std::cout << "Animal cpy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(Animal &cpy)
{
	this->type = cpy.getType();
	std::cout << "Animal cpy operator" << std::endl;
	return *this;
}

inline std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
}

