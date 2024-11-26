/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:32:39 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/26 22:27:39 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
int	main()
{
	Zombie	*horde;
	
	horde = zombieHorde(48, "random");
	
	std::cout << "tests:" << std::endl;
	horde->announce();
	horde[7].announce();
	std::cout << "end tests" << std::endl;
	delete[] horde;
	return 0;
}