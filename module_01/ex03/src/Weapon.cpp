/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:38:46 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/28 00:10:49 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::~Weapon(){};

Weapon::Weapon(const std::string type)
{
	this->_type = type;
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType() const
{
	return (this->_type);
}

