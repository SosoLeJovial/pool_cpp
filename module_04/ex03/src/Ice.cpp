#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
	: _type("ice")
{
	setColor(GREEN);
	std::cout << "Default Constructor Ice Call!" << std::endl;
	resetColor();
}

Ice::Ice(const Ice &src)
{
	*this = src;
	setColor(GREEN);
	std::cout << "Copy Constructor Ice Call!" << std::endl;
	resetColor();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	setColor(RED);
	std::cout << "Destructor Ice Call!" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Ice const &i)
{
	o << "Ice type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
Ice *Ice::clone() const
{
	Ice *cloned = new Ice(*this);
	return cloned;
}

void Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Ice::getType() const
{
	return (_type);
}

/* ************************************************************************** */