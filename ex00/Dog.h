#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog();
		Dog( Dog & a);
		virtual ~Dog();

		Dog & operator=( Dog const & thing);
		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:
		std::string type;
};

#endif
