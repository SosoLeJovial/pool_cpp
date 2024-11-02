/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:38:13 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/29 13:43:52 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};
HumanB::~HumanB(){};

HumanB::HumanB(const std::string name)
{
	_name = name;
	_weapon = NULL;
}


void	HumanB::setWeapon(Weapon& the_weapon)
{
	this->_weapon = &the_weapon;
}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
	{
			std::cout << this->_name << "fail to attack! nullos" << std::endl;

		return ;
	}
	std::cout << this->_name << "attacks with their" << *this->_weapon << std::endl;
}