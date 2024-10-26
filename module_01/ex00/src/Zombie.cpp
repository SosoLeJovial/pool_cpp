/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:18:40 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 00:42:21 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(const std::string& name)
{
	this->_name = name;
}


Zombie::~Zombie()
{

}

void	Zombie::announce()
{
	std::cout << this->_name << ":: BraiiiiiiinnnzzzZ..." << std::endl;
}