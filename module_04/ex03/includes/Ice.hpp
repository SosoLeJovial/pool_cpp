#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "utils.hpp"

class Ice : AMateria
{

public:
	Ice();
	Ice(Ice const &src);
	~Ice();

	Ice &operator=(Ice const &rhs);
	std::string const &getType() const; // Returns the materia type
	Ice *clone() const;
	void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &o, Ice const &i);

#endif /* ************************************************************* ICE_H */