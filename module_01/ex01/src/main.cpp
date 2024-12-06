/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:32:39 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/06 07:34:15 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
// #include <climits>

int main()
{
	Zombie *horde;

	horde = zombieHorde(34, "random");
	if (!horde)
	{
		std::cout << "Error: invalid number of zombies!" << std::endl;
		return (1);
	}
	horde->announce();
	delete[] horde;
	return 0;
}