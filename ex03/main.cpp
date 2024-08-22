#include "AMateria.h"
#include "MateriaSource.h"
#include "Character.h"
#include "Ice.h"
#include "Cure.h"

int main(void)
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	{
		ICharacter *bob = new Character("bob");
		ICharacter *me = new Character("me");
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		int i = -1;
		while (++i < 4)
		{
			bob->equip(src->createMateria("ice"));
		}
		bob->use(2, *me);
		bob->unequip(2);

		delete bob;
		delete me;
		delete src;
	}
	return 0;
}
