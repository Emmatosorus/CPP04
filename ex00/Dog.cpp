#include "Dog.h"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << this->type << " : Default constructor called!" << std::endl;
}

Dog::Dog(Dog &c) : Animal( c )
{
	std::cout << this->type << " : Copy constructor called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " : Destructor called!" << std::endl;
}

Dog & Dog::operator=( Dog const & thing )
{
	this->type = thing.type;
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << this->type << " : Woof! Woof!" << std::endl;
}