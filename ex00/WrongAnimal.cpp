#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &cpy)
{
	this->type = cpy.getType();
	std::cout << "WrongAnimal cpy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &cpy)
{
	this->type = cpy.getType();
	std::cout << "WrongAnimal cpy operator" << std::endl;
	return *this;
}

inline std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal..." << std::endl;
}

