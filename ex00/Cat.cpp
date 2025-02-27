#include "Cat.hpp"

Cat::Cat(/* args */):
Animal()
{
	this->type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Animal &cpy)
{
	this->type = cpy.getType();
	std::cout << "Cat cpy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Animal &Cat::operator=(Animal &cpy)
{
	this->type = cpy.getType();
	std::cout << "Cat cpy operator" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}