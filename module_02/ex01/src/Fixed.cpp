/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:41 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/22 21:09:34 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default Constructor 
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << 8;
}

Fixed::Fixed(float value)
{
	std::cout << value << std::endl;
	this->_value = roundf(value);
	std::cout << _value << std::endl;
	this->setRawBits(_value << 8);
	std::cout << _fractionalBits << std::endl;
	std::cout << "Float constructor called" << std::endl;
}

// int Fixed::toInt(float value) const
// {
// 	return 1;
// }

// int Fixed::toFloat(int value) const
// {
	
// }

// Deconstructor
Fixed::~Fixed()
{
	std::cout << "Deconstructor  called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// Copy assignement operator
Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy)
	{
		this->_value = copy._value;
		this->setRawBits(copy.getRawBits());
	}
	return *this;
}

std::ostream& operator<<(std::ostream &o, const Fixed &copy)
{
	o << copy.getRawBits();
	return o;
}


int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member funciton called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_fractionalBits << raw;
}
