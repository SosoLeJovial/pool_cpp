/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/02 14:55:17 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap *claptrap = new ClapTrap("Conan the Barbarian");
	ScavTrap *scavtrap = new ScavTrap("Brave Sir Robin");

	// display stats
	std::cout << std::endl;
	claptrap->displayStats();
	scavtrap->displayStats();
	std::cout << std::endl;

	scavtrap->guardGate();
	scavtrap->guardGate();
	std::cout << std::endl;

	scavtrap->attack("Conan the Barbarian");
	std::cout << std::endl;

	claptrap->attack("Brave Sir Robin");
	std::cout << std::endl;

	scavtrap->takeDamage(95);
	std::cout << std::endl;

	scavtrap->beRepaired(5);
	std::cout << std::endl;

	scavtrap->displayStats();
	claptrap->displayStats();
	delete scavtrap;
	delete claptrap;
	return 0;
}

void setColor(const std::string &color)
{
	std::cout << color;
}