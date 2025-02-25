#ifndef WRONGCAT
#define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(WrongAnimal &cpy);
	~WrongCat();
	WrongAnimal &operator=(WrongAnimal &);
	void makeSound() const;
};

#endif