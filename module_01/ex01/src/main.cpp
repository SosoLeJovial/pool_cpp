/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:32:39 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/29 20:15:35 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <climits>

int main()
{
	Zombie *horde;

	horde = zombieHorde(34, "random");
	if (!horde)
	{
		std::cerr << "Error: invalid number of zombies!" << std::endl;
		return (1);
	}
	std::cout << "tests:" << std::endl;
	horde->announce();
	horde[7].announce();
	std::cout << "end tests" << std::endl;
	delete[] horde;
	return 0;
}