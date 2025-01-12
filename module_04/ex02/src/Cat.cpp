/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:50:03 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/11 05:47:24 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	setColor(CYAN);
	std::cout << "Cat default constructor called" << std::endl;
	resetColor();
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	setColor(CYAN);
	std::cout << "Cat copy constructor called" << std::endl;
	resetColor();
	this->_brain = new Brain(src.getBrain());
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	setColor(CYAN);
	std::cout << "Cat destructor called" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdeas()[i]);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const Brain &Cat::getBrain(void) const
{
	return *_brain;
}

void Cat::setBrain(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

/* ************************************************************************** */