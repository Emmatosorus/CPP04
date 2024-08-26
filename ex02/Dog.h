#ifndef DOG_H
# define DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog( Dog & a);
		virtual ~Dog();

		Dog & operator=( Dog const & thing);
		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:
		std::string type;

	private:
		Brain * brain;
};

#endif
