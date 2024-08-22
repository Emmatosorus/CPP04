#include "AMateria.h"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &thing)
{
	this->type = thing.getType();
}

AMateria &AMateria::operator=(const AMateria &thing)
{
	this->type = thing.getType();
	return *this;
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "If you see this then I f***** up T-T" << std::endl;
}