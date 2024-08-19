#include "Animal.h"

Animal::Animal()
{
	this->type = "";
	std::cout << "Animal : Default constructor called!" << std::endl;
}

Animal::Animal(Animal & a)
{
	this->type = a.type;
	std::cout << "Animal : Copy constructor called!" << std::endl;
}

Animal::Animal(std::string & name)
{
	this->type = name;
	std::cout << "Animal : Constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor called!" << std::endl;
}

Animal & Animal::operator=( Animal const & thing )
{
	this->type = thing.type;
	return *this;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Default animal sound!" << std::endl;
}