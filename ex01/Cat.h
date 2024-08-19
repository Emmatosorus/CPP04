#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat & a);
		virtual ~Cat();

		Cat & operator=( Cat const & thing);
		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:
		std::string type;

	private:
		Brain * brain;
};

#endif