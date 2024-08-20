#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain & c);
		~Brain();

		Brain & operator=(const Brain & thing);
		std::string ideas[100];
};


#endif
