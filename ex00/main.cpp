#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

void	func(const Animal * a)
{
	a->makeSound();
}

void	Wrongfunc(const WrongAnimal * a)
{
	a->makeSound();
}

int main( void )
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		std::cout << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	{
		const WrongAnimal* bob = new WrongCat();
		std::cout << std::endl << bob->getType() << std::endl << std::endl;
		bob->makeSound(); //will *not* output the cat sound!

		delete bob;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	{
		const WrongCat bob;

		std::cout << std::endl << bob.getType() << std::endl << std::endl;
		bob.makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
	{
		const Animal *steve = new Dog();
		std::cout << std::endl;
		func(steve);
		std::cout << std::endl;
		delete steve;
		std::cout << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 5 ###############\x1b[0m" << std::endl << std::endl;
	{
		const WrongAnimal *steve = new WrongCat();
		std::cout << std::endl;
		Wrongfunc(steve);
		std::cout << std::endl;
		delete steve;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}