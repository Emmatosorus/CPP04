#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice : public AMateria
{
	public:
		Ice();
		Ice( const Ice & thing);
		~Ice();

		Ice & operator=( const Ice & thing );

		Ice * clone( void ) const;
		void	use( ICharacter & target);
};


#endif //EX03_ICE_H
