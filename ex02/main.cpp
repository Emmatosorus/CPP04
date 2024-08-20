#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"
#include "Brain.h"

int main( void )
{
	// ### SHOULD NOT COMPILE ###
//	std::cout << std::endl << "\x1b[1;36m############### TEST 0 ###############\x1b[0m" << std::endl << std::endl;
//	{
//		const Animal *j = new Dog();
//		const Animal *i = new Cat();
//		std::cout << std::endl;
//		delete j;
//		delete i;
//	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	{
		Cat *cat = new Cat();
		Dog *dog = new Dog();

		cat->makeSound();
		dog->makeSound();

		delete cat;
		delete dog;
	}
	std::cout << std::endl;
	return 0;
}