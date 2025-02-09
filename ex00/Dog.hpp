#ifndef DOG
#define DOG

#include "Animal.hpp"

class Dog: public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(Animal &cpy);
	~Dog();
	Animal &operator=(Animal &cpy);
	void makeSound() const;
};

#endif