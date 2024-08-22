#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{
	public:
		Character( std::string const & name);
		Character( const Character & thing);
		~Character();

		Character & operator=( const Character & thing );

		std::string	const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

	private:
		Character();
		std::string		name;
		AMateria		*inventory[4];
		static AMateria	*surrounding[20];
		static int		NbCharacter;
		static int		GC_nb;
};


#endif
