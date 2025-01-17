#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
	: _type("Cure")
{
	setColor(GREEN);
	std::cout << "Default Constructor Cure Call!" << std::endl;
	resetColor();
}

Cure::Cure(const Cure &src)
{
	setColor(GREEN);
	std::cout << "Copy Constructor Cure Call!" << std::endl;
	resetColor();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	setColor(RED);
	std::cout << "Destructor Cure Call!" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Cure const &i)
{
	o << "Value = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */