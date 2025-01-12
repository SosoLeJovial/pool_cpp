#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
	: _ideas()
{
	setColor(PINK);
	std::cout << "Brain constructor called" << std::endl;
	resetColor();
}

Brain::Brain(const Brain &src)
{
	setColor(PINK);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	resetColor();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	setColor(PINK);
	std::cout << "Brain destructor called" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string *Brain::getIdeas() const
{
	return (std::string *)this->_ideas;
}

void Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

/* ************************************************************************** */