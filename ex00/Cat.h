#ifndef CAT_H
# define CAT_H

#include "Animal.h"

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat & a);
		~Cat();

		Cat & operator=( Cat const & thing);
		void	makeSound( void ) const;

	protected:
		std::string type;
};

#endif