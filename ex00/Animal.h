#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal( Animal & a);
		Animal( std::string & name );
		~Animal();

		Animal & operator=( Animal const & thing);

		virtual void	makeSound( void ) const;
		std::string	getType( void ) const;

	protected:
		std::string type;
};

#endif
