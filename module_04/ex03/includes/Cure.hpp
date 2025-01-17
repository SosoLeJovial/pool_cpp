#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "utils.hpp"
#include "AMateria.hpp"

class Cure : AMateria
{

public:
	Cure();
	Cure(Cure const &src);
	~Cure();

	Cure &operator=(Cure const &rhs);
	std::string const &getType() const; // Returns the materia type
	Cure *clone() const;
	void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &o, Cure const &i);

#endif /* ************************************************************ CURE_H */