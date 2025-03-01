#ifndef BRAIN
#define BRAIN

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(const Brain&);
	Brain &operator=(const Brain&);
	~Brain();
};


#endif