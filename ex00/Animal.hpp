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
	~Animal();
	Animal &operator=(Animal &cpy);
	std::string getType() const;
	void makeSound() const;
};

#endif