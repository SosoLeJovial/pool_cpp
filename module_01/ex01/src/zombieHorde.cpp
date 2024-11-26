/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:40:05 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/26 21:54:49 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
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
