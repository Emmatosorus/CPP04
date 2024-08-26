#include "Cat.h"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << this->type << " : Default constructor called!" << std::endl;
}

Cat::Cat(Cat &c) : Animal( c )
{
	this->brain = new Brain( *c.brain );
	std::cout << this->type << " : Copy constructor called!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " : Destructor called!" << std::endl;
}

Cat & Cat::operator=( Cat const & thing )
{
	this->type = thing.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain( *thing.brain );
	return *this;
}

std::string	Cat::getType( void ) const
{
	return this->type;
}

void	Cat::makeSound( void ) const
{
	std::cout << this->type << " : Meow! Meow!" << std::endl;
}