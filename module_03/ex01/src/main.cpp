/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/14 18:18:07 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
	std::cout << "HelloWorld!" << std::endl;
	ClapTrap claptrap("Conan le Barbare");
	ScavTrap scavtrap("La ciboulette");

	std::cout << std::endl;
	claptrap.displayStats();
	std::cout << std::endl;
	scavtrap.displayStats();
	std::cout << std::endl;

	scavtrap.guardGate();
	std::cout << std::endl;

	scavtrap.attack("Conan le Barbare");
	std::cout << std::endl;

	scavtrap.displayStats();
	claptrap.displayStats();
	return 0;
}

void setColor(const std::string &color)
{
	std::cout << color;
}