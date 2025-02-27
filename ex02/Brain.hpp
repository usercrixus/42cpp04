#ifndef BRAIN
#define BRAIN

#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(Brain&);
	Brain &operator=(Brain&);
	~Brain();
};


#endif