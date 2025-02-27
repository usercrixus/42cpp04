#include "Dog.hpp"

Dog::Dog(/* args */):
Animal()
{
	_brain = new Brain;
	this->type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	_brain = new Brain(*cpy._brain);
	this->type = cpy.getType();
	std::cout << "Dog cpy constructor" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
	_brain = new Brain(*cpy._brain);
	this->type = cpy.getType();
	std::cout << "Dog cpy operator" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}
