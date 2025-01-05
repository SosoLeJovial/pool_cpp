/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/02 14:59:14 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("Le poireau");
	ScavTrap scavtrap("La ciboulette");
	FragTrap fragtrap("Le chou-fleur");

	claptrap.displayStats();
	scavtrap.displayStats();
	fragtrap.displayStats();

	std::cout << std::endl;
	std::cout << std::endl;

	// Test attack
	fragtrap.attack("target");
	std::cout << std::endl;

	// Test takeDamage
	fragtrap.takeDamage(34);
	std::cout << std::endl;

	// Test beRepaired
	fragtrap.beRepaired(3);
	std::cout << std::endl;

	fragtrap.highFivesGuys();
	return 0;
}

void setColor(const std::string &color)
{
	std::cout << color;
}