#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{
	public:
		Character ( std::string const & name);
		Character( const Character & thing);
		~Character();

		Character & operator=( const Character & thing );

	private:
		Character();
		AMateria inventory[4];
		static AMateria surrounding[20];
};


#endif
