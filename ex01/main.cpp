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

		std::cout << std::endl;

		for (int i = 0; i < 5; i++)
			std::cout << s2.ideas[i];
		std::cout << std::endl << std::endl;

		delete s1;
		s1 = new Brain(s2);

		std::cout << std::endl;

		for (int i = 0; i < 5; i++)
			std::cout << s2.ideas[i];
		std::cout << std::endl << std::endl;
		delete s1;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	{
		Animal	*tab[10];

		for (int i = 0; i < 5; i++)
			tab[i] = new Dog();
		std::cout << std::endl;
		for (int i = 5; i < 10; i++)
			tab[i] = new Cat();
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			tab[i]->makeSound();
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			delete tab[i];
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << std::endl;
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	return 0;
}