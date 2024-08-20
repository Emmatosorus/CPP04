#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	this->type = "";
	std::cout << "Animal : Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & a)
{
	this->type = a.type;
	std::cout << "Animal : Copy constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string & name)
{
	this->type = name;
	std::cout << "Animal : Constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal : Destructor called!" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & thing )
{
	this->type = thing.type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound!" << std::endl;
}