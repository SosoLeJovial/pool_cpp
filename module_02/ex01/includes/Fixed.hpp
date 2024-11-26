/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:35:38 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/24 18:00:29 by tsofien-         ###   ########.fr       */
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
	Fixed &operator=(const Fixed &copy);
	Fixed &operator<(const Fixed &copy);
	Fixed &operator>(const Fixed &copy);
	Fixed &operator>=(const Fixed &copy);
	Fixed &operator<=(const Fixed &copy);
	Fixed &operator+(const Fixed &copy);
	Fixed &operator-(const Fixed &copy);
	Fixed &operator*(const Fixed &copy);
	Fixed &operator/(const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};
	std::ostream &operator<<(std::ostream &o, const Fixed &copy);

#endif