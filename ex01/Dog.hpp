#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* _brain;
public:
	Dog(/* args */);
	Dog(Animal &cpy);
	~Dog();
	Animal &operator=(Animal &cpy);
	void makeSound() const;
};

#endif