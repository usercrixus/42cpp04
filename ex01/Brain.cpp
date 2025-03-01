#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain cpy constructor" << std::endl;
	*this = cpy;
}

Brain &Brain::operator=(const Brain &cpy)
{
	std::cout << "Brain cpy operator" << std::endl;
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = cpy.ideas[i];
		i++;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}