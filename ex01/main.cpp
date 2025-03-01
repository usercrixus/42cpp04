#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;


	Dog basic;
	{
		Dog tmp = basic;
	}
	Cat basic2;
	{
		Cat tmp2 = basic2;
	}

	Animal* animals[10];
	int x = 0;
	while (x < 5)
	{
		animals[x] = new Dog();
		x++;
	}
	while (x < 10)
	{
		animals[x] = new Cat();
		x++;
	}
	x = 0;
	while (x < 10)
	{
		delete animals[x];
		x++;
	}
	return 0;
}