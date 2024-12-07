/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:37:07 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/07 01:58:05 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(42);
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "Start:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "Atfer increment" << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
