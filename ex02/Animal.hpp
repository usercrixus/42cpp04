#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal
{
private:
	/* data */
protected:
	std::string type;
public:
	Animal(/* args */);
	Animal(Animal &cpy);
 	virtual ~Animal();
	Animal &operator=(Animal &cpy);
	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif