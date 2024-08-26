#ifndef AANIMAL_H
# define AANIMAL_H
#include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal( AAnimal & a);
		AAnimal( std::string & name );
		virtual ~AAnimal();

		AAnimal & operator=( AAnimal const & thing);

		virtual void	makeSound( void ) const = 0;
		virtual std::string	getType( void ) const;

	protected:
		std::string type;
};

#endif
