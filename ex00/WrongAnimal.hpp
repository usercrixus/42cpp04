#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <iostream>

class WrongAnimal
{
private:
	/* data */
protected:
	std::string type;
public:
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal &cpy);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &cpy);
	std::string getType() const;
	void makeSound() const;
};

#endif