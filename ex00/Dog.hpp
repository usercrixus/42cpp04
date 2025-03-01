#ifndef DOG
#define DOG

#include "Animal.hpp"

class Dog: public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(const Animal &cpy);
	~Dog();
	Animal &operator=(const Animal &cpy);
	void makeSound() const;
};

#endif