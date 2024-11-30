/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:40:05 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/29 20:08:47 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>
#include <stdlib.h>

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 0)
	{
		std::cerr << "Error: invalid number of zombies!" << std::endl;
		exit(1);
	}
	Zombie *horde = new Zombie[N];
	for (size_t i = 0; i < (size_t)N; i++)
	{
		std::stringstream number;
		number << i + 1;
		std::string tmp = number.str();
		horde[i].setName(name + tmp);
		horde[i].announce();
	}
	return (horde);
}
