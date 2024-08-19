#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain : Default constructor called!" << std::endl;
}

Brain::Brain(const Brain &c)
{
	std::copy(c.ideas, c.ideas + 100, this->ideas);
	std::cout << "Brain : Copy constructor called!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called!" << std::endl;
}

Brain & Brain::operator=(const Brain &thing)
{
	std::copy(thing.ideas, thing.ideas + 100, this->ideas);
	return *this;
}