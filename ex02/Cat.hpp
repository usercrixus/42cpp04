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
	Cat(const Cat &cpy);
	~Cat();
	Cat &operator=(const Cat &);
	void makeSound() const;
};

#endif