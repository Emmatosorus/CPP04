#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat( WrongCat & a);
		virtual ~WrongCat();

		WrongCat & operator=( WrongCat const & thing);
		void	makeSound( void ) const;
		std::string	getType( void ) const;

	protected:
		std::string type;
};


#endif