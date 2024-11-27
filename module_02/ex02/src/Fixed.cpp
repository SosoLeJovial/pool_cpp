/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:41 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/27 02:28:16 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default Constructor
Fixed::Fixed() : _value(0) {}

Fixed::Fixed(int value)
{
	this->setRawBits(value << _fractionalBits);
}

Fixed::Fixed(float value)
{
	this->_value = roundf(value * (1 << _fractionalBits));
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
Fixed::~Fixed() {}

// Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

// Copy assignement operator
Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->setRawBits(copy.getRawBits());
	return *this;
}

Fixed &Fixed::operator*(const Fixed &copy)
{
	float tmp = copy.toFloat() * this->getRawBits();
	this->setRawBits(tmp);
	return *this;
}

Fixed &Fixed::operator+(const Fixed &copy)
{
	float tmp = copy.toFloat() + this->getRawBits();
	this->setRawBits(tmp);
	return *this;
}

Fixed &Fixed::operator-(const Fixed &copy)
{
	float tmp = copy.toFloat() - this->getRawBits();
	this->setRawBits(tmp);
	return *this;
}

Fixed &Fixed::operator/(const Fixed &copy)
{
	float tmp = copy.toFloat() / this->getRawBits();
	this->setRawBits(tmp);
	return *this;
}

bool Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

Fixed &Fixed::operator++(int)
{
	_value += 1 << _fractionalBits;
}

Fixed &Fixed::operator--(int)
{
	_value -= 1 << _fractionalBits;
}

Fixed &Fixed::operator++()
{
	_value += 1 << _fractionalBits;
}

Fixed &Fixed::operator--()
{
	_value -= 1 << _fractionalBits;
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
