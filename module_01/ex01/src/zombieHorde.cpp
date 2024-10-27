/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:40:05 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 20:42:28 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	for (size_t i = 0; i < (size_t)N; i++)
	{

		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}
