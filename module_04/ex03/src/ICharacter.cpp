#include "ICharacter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ICharacter::ICharacter()
{
	setColor(GREEN);
	std::cout << "Default constructor ICharacter Call!" << std::endl;
	resetColor();
}

ICharacter::ICharacter(const ICharacter &src)
{
	setColor(GREEN);
	std::cout << "Copy constructor ICharacter Call!" << std::endl;
	resetColor();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ICharacter::~ICharacter()
{
	setColor(RED);
	std::cout << "Destructor ICharacter Call!" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ICharacter &ICharacter::operator=(ICharacter const &rhs)
{
	// if ( this != &rhs )
	//{
	// this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &operator<<(std::ostream &o, ICharacter const &i)
{
	// o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */