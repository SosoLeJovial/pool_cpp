/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:14:48 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/26 22:06:08 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// 
int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;
	stringPTR = &str;

	std::cout << "Adress: " << std::endl;
	std::cout << "Adress of str: " << &str << std::endl;
	std::cout << "Adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress of stringREF: " << &stringREF << std::endl << std::endl;
	std::cout << "Value: " << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	return (0);
}
