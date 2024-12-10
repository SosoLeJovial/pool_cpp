/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:38 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/06 07:50:20 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int _fractionalBits = 8;

public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator*(const Fixed &copy);
	Fixed &operator/(const Fixed &copy);
	Fixed &operator+(const Fixed &copy);
	Fixed &operator-(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);

	bool operator>(const Fixed &copy) const;
	bool operator>=(const Fixed &copy) const;
	bool operator<(const Fixed &copy) const;
	bool operator<=(const Fixed &copy) const;
	bool operator==(const Fixed &copy) const;
	bool operator!=(const Fixed &copy) const;

	Fixed operator++(int);
	Fixed operator--(int);
	Fixed operator++(void);
	Fixed operator--(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &copy);

#endif