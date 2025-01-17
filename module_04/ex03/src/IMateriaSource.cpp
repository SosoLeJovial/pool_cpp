#include "IMateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

IMateriaSource::IMateriaSource()
{
	setColor(GREEN);
	std::cout << "constructor call!" << std::endl;
	resetColor();
}

IMateriaSource::IMateriaSource(const IMateriaSource &src)
{
	setColor(GREEN);
	std::cout << "constructor call!" << std::endl;
	resetColor();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

IMateriaSource::~IMateriaSource()
{
	setColor(RED);
	std::cout << "Destructor call!" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

IMateriaSource &IMateriaSource::operator=(IMateriaSource const &rhs)
{
	// if ( this != &rhs )
	//{
	// this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &operator<<(std::ostream &o, IMateriaSource const &i)
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