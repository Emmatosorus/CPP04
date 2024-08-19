#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog();
		Dog( Dog & a);
		~Dog();

		Dog & operator=( Dog const & thing);
		void	makeSound( void ) const;

	protected:
		std::string type;
};

#endif
