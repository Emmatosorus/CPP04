#include "AAnimal.h"

AAnimal::AAnimal()
{
	this->type = "";
	std::cout << "AAnimal : Default constructor called!" << std::endl;
}

AAnimal::AAnimal(AAnimal & a)
{
	this->type = a.type;
	std::cout << "AAnimal : Copy constructor called!" << std::endl;
}

AAnimal::AAnimal(std::string & name)
{
	this->type = name;
	std::cout << "AAnimal : Constructor called!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal : Destructor called!" << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & thing )
{
	this->type = thing.type;
	return *this;
}

std::string	AAnimal::getType( void ) const
{
	return this->type;
}

void	AAnimal::makeSound() const
{
	std::cout << "Default AAnimal sound!" << std::endl;
}