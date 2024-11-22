/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:48:27 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/22 18:50:41 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
	std::string input;
	Harl the_boss;
	
	std::cout << "Enter a command:" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		if (!input.compare("EXIT"))
			break ;
		the_boss.complain(input);
	}
	return 0;
}
