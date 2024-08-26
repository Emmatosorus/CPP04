#include "Dog.h"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " : Default constructor called!" << std::endl;
}

Dog::Dog(Dog &c) : Animal( c )
{
	this->brain = new Brain( *c.brain );
	std::cout << this->type << " : Copy constructor called!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " : Destructor called!" << std::endl;
}

Dog & Dog::operator=( Dog const & thing )
{
	this->type = thing.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain( *thing.brain );
	return *this;
}

std::string	Dog::getType( void ) const
{
	return this->type;
}

void	Dog::makeSound( void ) const
{
	std::cout << this->type << " : Woof! Woof!" << std::endl;
}