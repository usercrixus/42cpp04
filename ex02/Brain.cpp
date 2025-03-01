#include "Brain.hpp"

Brain::Brain(/* args */)
{
}

Brain::Brain(const Brain &cpy)
{
	*this = cpy;
}

Brain &Brain::operator=(const Brain &cpy)
{
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = cpy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
}