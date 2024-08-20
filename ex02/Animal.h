#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal( Animal & a);
		Animal( std::string & name );
		virtual ~Animal() = 0;

		Animal & operator=( Animal const & thing);

		virtual void	makeSound( void ) const;
		virtual std::string	getType( void ) const;

	protected:
		std::string type;
};

#endif
