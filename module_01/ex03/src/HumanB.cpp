/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:38:13 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/05 00:30:23 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};
HumanB::~HumanB(){};

HumanB::HumanB(const std::string name) : _name(name), _weapon(NULL){};

void	HumanB::setWeapon(Weapon& the_weapon)
{
	this->_weapon = &the_weapon;
}

void	HumanB::attack()
{
	if (_weapon == NULL)
	{
			std::cout << _name << "fail to attack! nullos" << std::endl;

		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
