/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:38:13 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/28 00:17:39 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};
HumanB::~HumanB(){};

HumanB::HumanB(const std::string name)
{
	this->_name = name;
}


void	HumanB::setWeapon(Weapon the_weapon)
{
	this->_weapon = the_weapon;
}

void	HumanB::attack()
{
	if (!(this->_weapon.getType().empty()))
	{
			std::cout << this->_name << "fail to attack! nullos" << std::endl;

		return ;
	}
	std::cout << this->_name << "attacks with their" << this->_weapon.getType() << std::endl;
}