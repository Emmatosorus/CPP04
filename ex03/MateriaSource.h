#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource( const MateriaSource & thing );
		~MateriaSource();

		MateriaSource & operator=( const MateriaSource & thing );

		void learnMateria(AMateria * m);
		AMateria * createMateria(std::string const & type);

	private:
		AMateria *learned[4];
};


#endif
