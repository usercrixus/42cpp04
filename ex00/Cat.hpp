#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat: public Animal
{
private:
	/* data */
public:
	Cat(/* args */);
	Cat(Animal &cpy);
	~Cat();
	Animal &operator=(Animal &);
	void makeSound() const;
};

#endif