#include "Cat.h"

Cat::Cat() : Animal( )
{
	this->type = "Cat";
	std::cout << this->type << " : Default constructor called!" << std::endl;
}

Cat::Cat(Cat &c) : Animal( c )
{
	std::cout << this->type << " : Copy constructor called!" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " : Destructor called!" << std::endl;
}

Cat & Cat::operator=( Cat const & thing )
{
	this->type = thing.type;
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