#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal & a);
		WrongAnimal( std::string & name );
		virtual ~WrongAnimal();

		WrongAnimal & operator=( WrongAnimal const & thing);

		void	makeSound( void ) const;
		virtual std::string	getType( void ) const;

	protected:
		std::string type;
};


#endif
