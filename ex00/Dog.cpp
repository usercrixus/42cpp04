#include "Dog.hpp"

Dog::Dog(/* args */):
Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Animal &cpy)
{
	this->type = cpy.getType();
	std::cout << "Dog cpy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Animal &Dog::operator=(const Animal &cpy)
{
	this->type = cpy.getType();
	std::cout << "Dog cpy operator" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}
