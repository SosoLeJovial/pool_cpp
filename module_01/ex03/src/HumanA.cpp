/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:31:39 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/28 00:33:07 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){};
HumanA::~HumanA(){};

HumanA::HumanA(const std::string name, Weapon type)
{
	this->_name = name;
	this->_weapon = type;
}


void	HumanA::setWeapon(Weapon the_weapon)
{
	this->_weapon = the_weapon;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
