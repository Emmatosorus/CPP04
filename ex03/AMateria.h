#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.h"

class AMateria
{
	protected:
		AMateria();
		std::string	type;
	public:
		AMateria(std::string const & type);
		AMateria( const AMateria & thing);
		virtual ~AMateria();

		AMateria & operator=( const AMateria & thing);

		std::string const & getType() const;

		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
