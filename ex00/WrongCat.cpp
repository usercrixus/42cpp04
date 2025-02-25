#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */):
WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongAnimal &cpy)
{
	this->type = cpy.getType();
	std::cout << "WrongCat cpy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongAnimal &WrongCat::operator=(WrongAnimal &cpy)
{
	this->type = cpy.getType();
	std::cout << "WrongCat cpy operator" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat..." << std::endl;
}
