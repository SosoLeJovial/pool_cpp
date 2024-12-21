/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:37:07 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/21 19:46:27 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iomanip>
#include <string>

// int main(void)
// {
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max(a, b) << std::endl;
// 	return 0;
// }

void setColor(const std::string &color)
{
	std::cout << color;
}

void resetColor()
{
	std::cout << "\033[0m";
}

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";

int main(void)
{
	Fixed a(23);
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << std::setw(30) << std::left << "Initial value of a:" << a << std::endl
			  << std::endl;
	std::cout << std::setw(30) << std::left << "Initial value of b:" << b << std::endl
			  << std::endl;
	setColor(MAGENTA);
	std::cout << std::setw(30) << std::left << "a + b:" << a + b << std::endl;
	resetColor();
	setColor(CYAN);
	std::cout << std::setw(30) << std::left << "a - b:" << a - b << std::endl;
	resetColor();
	setColor(YELLOW);
	std::cout << std::setw(30) << std::left << "a * b:" << a * b << std::endl;
	resetColor();
	setColor(RED);
	std::cout << std::setw(30) << std::left << "a / b:" << a / b << std::endl;
	resetColor();

	std::cout << std::setw(30) << std::left << "Initial value of a:" << a << std::endl
			  << std::endl;

	setColor(GREEN);
	std::cout << std::setw(30) << std::left << "Pre-increment a:" << ++a << std::endl;
	resetColor();
	std::cout << std::setw(30) << std::left << "Value of a after pre-increment:" << a << std::endl
			  << std::endl;

	setColor(YELLOW);
	std::cout << std::setw(30) << std::left << "Post-increment a:" << a++ << std::endl;
	resetColor();
	std::cout << std::setw(30) << std::left << "Value of a after post-increment:" << a << std::endl
			  << std::endl;

	setColor(CYAN);
	std::cout << std::setw(30) << std::left << "Pre-decrement a:" << --a << std::endl;
	resetColor();
	std::cout << std::setw(30) << std::left << "Value of a after pre-decrement:" << a << std::endl
			  << std::endl;

	setColor(MAGENTA);
	std::cout << std::setw(30) << std::left << "Post-decrement a:" << a-- << std::endl;
	resetColor();
	std::cout << std::setw(30) << std::left << "Value of a after post-decrement:" << a << std::endl
			  << std::endl;

	setColor(RED);
	std::cout << std::setw(30) << std::left << "Value of b:" << b << std::endl;
	resetColor();

	setColor(BLUE);
	std::cout << std::setw(30) << std::left << "Max of a and b:" << Fixed::max(a, b) << std::endl;
	resetColor();
	setColor(GREEN);
	std::cout << std::setw(30) << std::left << "Min of a and b:" << Fixed::min(a, b) << std::endl;
	resetColor();

	return 0;
}
