#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* _brain;
public:
	Cat(/* args */);
	Cat(Animal &cpy);
	~Cat();
	Animal &operator=(Animal &);
	void makeSound() const;
};

#endif