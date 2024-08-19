#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal( )
{
	this->type = "Not a cat";
	std::cout << this->type << " : Default constructor called!" << std::endl;
}

WrongCat::WrongCat(WrongCat &c) : WrongAnimal( c )
{
	std::cout << this->type << " : Copy constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " : Destructor called!" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & thing )
{
	this->type = thing.type;
	return *this;
}

std::string	WrongCat::getType( void ) const
{
	return this->type;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << this->type << " : Beep! Beep! I'm a sheep!" << std::endl;
}