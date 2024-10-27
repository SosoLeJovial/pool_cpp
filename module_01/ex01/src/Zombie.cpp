/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:15:02 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 20:36:44 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){};

Zombie::Zombie(std::string name)
{
	this->_name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed!" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string name)
{
	this->_name = name;
}
