/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:41 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/22 12:23:12 by tsofien-         ###   ########.fr       */
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
	this->setRawBits(value << _fractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value)
{
	this->_value = roundf(value * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

// Deconstructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
		this->setRawBits(copy.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed &copy)
{
	o << copy.toFloat();
	return o;
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
