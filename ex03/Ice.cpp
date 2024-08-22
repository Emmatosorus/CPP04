#include "Ice.h"

Ice::Ice()
{
	this->type = "cure";
}

Ice::Ice(const Ice &thing) : AMateria( thing )
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &thing)
{
	this->type = thing.getType();
	return *this;
}

Ice *Ice::clone() const
{
	Ice *a = new Ice();
	return a;
}

void Ice::use(ICharacter &target)
{
	std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}