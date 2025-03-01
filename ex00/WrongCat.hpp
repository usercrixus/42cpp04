#ifndef WRONGCAT
#define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(const WrongAnimal &cpy);
	~WrongCat();
	WrongAnimal &operator=(const WrongAnimal &);
	void makeSound() const;
};

#endif