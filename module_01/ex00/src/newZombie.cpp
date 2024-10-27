/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:46:11 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 18:53:39 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//  Zombie* newZombie( std::string name );
// It creates a zombie, name it, and return it so you can use it outside of the function
// scope.

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
