#include "Cure.h"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure &thing) : AMateria( thing )
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &thing)
{
	this->type = thing.getType();
	return *this;
}

Cure *Cure::clone() const
{
	Cure *a = new Cure();
	return a;
}

void Cure::use(ICharacter &target)
{
	std::cout << "Cure : \"* heals " << target.getName() << "\'s wounds *\"" << std::endl;
}