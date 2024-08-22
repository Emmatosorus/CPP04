#include "Character.h"
#include "Ice.h"
#include "Cure.h"

AMateria * Character::surrounding[20];
int Character::NbCharacter = 0;
int Character::GC_nb = 0;

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	if (this->NbCharacter == 0)
		for (int i = 0; i < 20; i++)
			this->surrounding[i] = 0;
	this->NbCharacter++;
	GC_nb = 0;
}

Character::~Character()
{
	this->NbCharacter--;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	if (this->NbCharacter == 0)
	{
		for (int i = 0; i < 20; i++)
			if (this->surrounding[i])
				delete this->surrounding[i];
		GC_nb = 0;
	}
}

Character::Character(const std::string &name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	if (this->NbCharacter == 0)
		for (int i = 0; i < 20; i++)
			this->surrounding[i] = 0;
	this->NbCharacter++;
	GC_nb = 0;
	this->name = name;
}

Character::Character(const Character &thing)
{
	for (int i = 0; i < 4; i++)
			this->inventory[i] = thing.inventory[i]->clone();
	this->name = thing.getName();
}

Character &Character::operator=(const Character &thing)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = thing.inventory[i]->clone();
	this->name = thing.getName();
	return *this;
}

std::string	const & Character::getName() const
{
	return (this->name);
}

void Character::equip( AMateria * m)
{
	int	i = 0;
	while (i < 4 && this->inventory[i])
	{
		i++;
	}
	if (i == 4)
		return;
	this->inventory[i] = m;
}

void Character::unequip(int idx)
{
	int i = -1;
	while (++i < 20)
	{
		if (!this->surrounding[i])
			break;
	}
	if (i == 20)
	{
		delete this->surrounding[GC_nb % 20];
	}
	this->surrounding[GC_nb % 20] = this->inventory[idx];
	this->inventory[idx] = 0;
	GC_nb++;
}

void	Character::use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}