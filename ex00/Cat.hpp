#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat: public Animal
{
private:
	/* data */
public:
	Cat(/* args */);
	Cat(const Animal &cpy);
	~Cat();
	Animal &operator=(const Animal &);
	void makeSound() const;
};

#endif