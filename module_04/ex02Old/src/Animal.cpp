/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 23:49:37 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/19 21:35:06 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
	: _type("Animal")
{
	setColor(GREEN);
	std::cout << "Animal default constructor called" << std::endl;
	resetColor();
}

Animal::Animal(const std::string &type)
	: _type(type)
{
	setColor(GREEN);
	std::cout << "Animal parameterized constructor called" << std::endl;
	resetColor();
}

Animal::Animal(const Animal &src)
	: _type(src._type)
{
	setColor(GREEN);
	std::cout << "Animal copy constructor called" << std::endl;
	resetColor();
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	setColor(GREEN);
	std::cout << "Animal destructor called" << std::endl;
	resetColor();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const
{
	return _type;
}

void Animal::setType(std::string type)
{
	_type = type;
}

/* ************************************************************************** */