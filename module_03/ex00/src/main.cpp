/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/14 15:13:47 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main()
{
	std::cout << "HelloWorld!" << std::endl;
	ClapTrap claptrap("Conan le Barbare");

	std::cout << std::endl;

	claptrap.setEnergy(5);
	claptrap.setAttack(34);
	// Test displayStats
	claptrap.displayStats();

	std::cout << std::endl;

	// Test attack
	claptrap.attack("target");
	std::cout << std::endl;

	// Test takeDamage
	claptrap.takeDamage(34);
	std::cout << std::endl;

	// Test beRepaired
	claptrap.beRepaired(3);
	std::cout << std::endl;

	claptrap.displayStats();
	std::cout << std::endl;
	return 0;
}

void setColor(const std::string &color)
{
	std::cout << color;
}