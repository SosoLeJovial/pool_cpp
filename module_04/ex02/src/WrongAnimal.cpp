/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:20:10 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/02 15:56:40 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
	: _type("Wrong Animal")
{
	setColor(CYAN);
	std::cout << "WrongAnimal default constructor called" << std::endl;
	resetColor();
}

WrongAnimal::WrongAnimal(std::string type)
	: _type(type)
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	setColor(CYAN);
	std::cout << "Wrong Animal copy constructor called" << std::endl;
	*this = src;
	resetColor();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	setColor(CYAN);
	std::cout << "WrongAnimal destructor called" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound() const
{
	setColor(GREEN);
	std::cout << _type << " sound" << std::endl;
	resetColor();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string WrongAnimal::getType() const
{
	return _type;
}

/* ************************************************************************** */