/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/28 16:34:13 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Conan the Barbarian");

	std::cout << std::endl;

	// Test displayStats
	claptrap.displayStats();
	claptrap.setAttack(5);
	claptrap.setEnergy(5);
	claptrap.displayStats();

	std::cout << std::endl;

	// Test attack
	claptrap.attack("an innocent villager");
	std::cout << std::endl;

	// Test takeDamage
	claptrap.takeDamage(5);
	std::cout << std::endl;

	// Test beRepaired
	claptrap.beRepaired(35);
	std::cout << std::endl;

	claptrap.displayStats();
	std::cout << std::endl;
	return 0;
}

void setColor(const std::string &color)
{
	std::cout << color;
}