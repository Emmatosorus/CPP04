#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class AMateria
{
	protected:
		//	[...]
	public:
		AMateria(std::string const & type);
		//	[...]

		std::string const & getType() const;

		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
