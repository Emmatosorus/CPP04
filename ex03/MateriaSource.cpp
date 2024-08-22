#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &thing)
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = thing.learned[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->learned[i])
			delete this->learned[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource &thing)
{
	for (int i = 0; i < 4; i++)
		if (this->learned[i])
			delete this->learned[i];
	for (int i = 0; i < 4; i++)
			this->learned[i] = thing.learned[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (++i < 4 && this->learned[i])
		;
	if (i == 4)
		return ;
	this->learned[i] = m->clone();
	delete m;
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	AMateria * truc;
	truc = 0;
	if (type == "ice")
		truc = new Ice();
	else if (type == "cure")
		truc = new Cure();
	return (truc);
}