#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"
#include "Brain.h"

int main( void )
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	{
		Brain *s1 = new Brain();
		Brain s2;

		s1->ideas[0] = "Hi ";
		s1->ideas[1] = "my ";
		s1->ideas[2] = "name ";
		s1->ideas[3] = "is ";
		s1->ideas[4] = "Steve!";

		s2 = *s1;
		for (int i = 0; i < 5; i++)
			std::cout << s2.ideas[i];
		std::cout << std::endl;

		s1 = new Brain(s2);
		for (int i = 0; i < 5; i++)
			std::cout << s2.ideas[i];
		std::cout << std::endl;
		delete s1;
	}
//	{
//		const Animal* meta = new Animal();
//		const Animal* j = new Dog();
//		const Animal* i = new Cat();
//
//		std::cout << std::endl;
//
//		std::cout << j->getType() << " " << std::endl;
//		std::cout << i->getType() << " " << std::endl;
//
//		std::cout << std::endl;
//
//		i->makeSound(); //will output the cat sound!
//		j->makeSound();
//		meta->makeSound();
//
//		std::cout << std::endl;
//
//		delete meta;
//		delete j;
//		delete i;
//	}
//	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
//	{
//		const WrongAnimal* bob = new WrongCat();
//		std::cout << std::endl << bob->getType() << std::endl << std::endl;
//		bob->makeSound(); //will *not* output the cat sound!
//
//		delete bob;
//	}
//	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
//	{
//		const WrongCat bob;
//
//		std::cout << std::endl << bob.getType() << std::endl << std::endl;
//		bob.makeSound();
//		std::cout << std::endl;
//	}
//	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
//	{
//		const Animal *steve = new Dog();
//		std::cout << std::endl;
//		func(steve);
//		std::cout << std::endl;
//		delete steve;
//		std::cout << std::endl;
//	}
//	std::cout << std::endl << "\x1b[1;36m############### TEST 5 ###############\x1b[0m" << std::endl << std::endl;
//	{
//		const WrongAnimal *steve = new WrongCat();
//		std::cout << std::endl;
//		Wrongfunc(steve);
//		std::cout << std::endl;
//		delete steve;
//		std::cout << std::endl;
//	}
	std::cout << std::endl;
	return 0;
}