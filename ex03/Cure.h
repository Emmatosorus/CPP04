#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure : public AMateria
{
	public:
		Cure();
		Cure( const Cure & thing );
		~Cure();

		Cure & operator=( const Cure & thing );

		Cure * clone( void ) const;
		void use( ICharacter & target);
};


#endif
