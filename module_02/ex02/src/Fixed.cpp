/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:41 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/07 05:13:56 by tsofien-         ###   ########.fr       */
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

Fixed Fixed::operator*(const Fixed &copy)
{
	float tmp = copy.toFloat() * this->toFloat();
	return Fixed(tmp);
}

Fixed Fixed::operator+(const Fixed &copy)
{
	float tmp = copy.toFloat() + this->toFloat();
	return Fixed(tmp);
}

Fixed Fixed::operator-(const Fixed &copy)
{
	float tmp = copy.toFloat() - this->toFloat();
	return Fixed(tmp);
}

Fixed Fixed::operator/(const Fixed &copy)
{
	float tmp = copy.toFloat() / this->toFloat();
	return Fixed(tmp);
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

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;

	_value++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_value--;
	return temp;
}

Fixed Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	_value--;
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

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
