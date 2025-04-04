/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:41 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/22 12:23:25 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default Constructor
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Deconstructor
Fixed::~Fixed()
{
	std::cout << "Destructor  called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// Copy assignement operator
Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy)
	{
		this->_value = copy._value;
		this->setRawBits(copy.getRawBits());
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
