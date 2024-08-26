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
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	{
		ICharacter *steve1 = new Character("steve1");
		ICharacter *steve2 = new Character("steve2");
		ICharacter *steve3 = new Character("steve3");
		ICharacter *steve4 = new Character("steve4");
		ICharacter *steve5 = new Character("steve5");
		ICharacter *me = new Character("me");
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Cure());

		int i = -1;
		while (++i < 4)
		{
			steve1->equip(src->createMateria("cure"));
			steve2->equip(src->createMateria("cure"));
			steve3->equip(src->createMateria("cure"));
			steve4->equip(src->createMateria("cure"));
			steve5->equip(src->createMateria("cure"));

		}
		steve1->use(0, *me);
		steve2->use(0, *me);
		steve3->use(0, *me);
		steve4->use(0, *me);
		steve5->use(0, *me);
		i = -1;
		while (++i < 4)
		{
			steve1->unequip(i);
			steve2->unequip(i);
			steve3->unequip(i);
			steve4->unequip(i);
			steve5->unequip(i);
		}

		delete me;
		delete steve1;
		delete steve2;
		delete steve3;
		delete steve4;
		delete steve5;
		delete src;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
	{
		ICharacter *steve1 = new Character("steve1");
		ICharacter *me = new Character("me");

		steve1->use(0, *me);
		steve1->unequip(0);

		delete steve1;
		delete me;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 5 ###############\x1b[0m" << std::endl << std::endl;
	{
		ICharacter *steve1 = new Character("steve1");
		ICharacter *me = new Character("me");
		IMateriaSource *src = new MateriaSource();

		src->learnMateria(new Ice());
		steve1->equip(src->createMateria("ice"));
		steve1->use(0, *me);

		delete steve1;
		delete src;
		delete me;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 6 ###############\x1b[0m" << std::endl << std::endl;
	{
		ICharacter *steve1 = new Character("steve1");
		ICharacter *me = new Character("me");
		IMateriaSource *src = new MateriaSource();

		src->learnMateria(new Ice());
		steve1->equip(src->createMateria("cure"));
		steve1->use(0, *me);

		steve1->equip(src->createMateria("ice"));
		steve1->use(0, *me);

		delete steve1;
		delete src;
		delete me;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 7 ###############\x1b[0m" << std::endl << std::endl;
	{
		IMateriaSource *src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());

		src->learnMateria(new Cure());

		ICharacter *steve1 = new Character("steve1");
		ICharacter *me = new Character("me");

		steve1->equip(src->createMateria("cure"));
		steve1->use(0, *me);

		delete steve1;
		delete src;
		delete me;
	}
	return 0;
}
