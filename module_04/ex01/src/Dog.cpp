/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:20:02 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/11 05:47:53 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	setColor(YELLOW);
	std::cout << "Dog default constructor called" << std::endl;
	resetColor();
	_brain = new Brain;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	setColor(YELLOW);
	std::cout << "Dog copy constructor called" << std::endl;
	resetColor();
	this->_brain = new Brain(src.getBrain());
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	setColor(YELLOW);
	std::cout << "Dog destructor called" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &rhs)
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

void Dog::makeSound() const
{
	std::cout << "WOUAF WOUAF bon toutou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const Brain &Dog::getBrain(void) const
{
	return *_brain;
}

void Dog::setBrain(int index, std::string idea)
{
	_brain->setIdea(index, idea);
}

/* ************************************************************************** */