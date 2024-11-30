/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:14:48 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/29 20:02:27 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Reference is a pointer that is automatically dereferenced
// Reference cannot be reassigned
// Reference cannot be NULL
// Reference must be initialized when declared
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string str2 = "HI THIS IS BRAIN2";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adress: " << std::endl;
	std::cout << "Adress of str: " << &str << std::endl;
	std::cout << "Adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress of stringREF: " << &stringREF << std::endl
			  << std::endl;
	std::cout << "Value: " << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl
			  << std::endl;
	stringREF = str2;
	std::cout << "New Assignement reference: " << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	// stringREF = NULL;
	// std::cout << "New Assignement reference: " << std::endl;
	// std::cout << "Value of stringREF: " << stringREF << std::endl;
	return (0);
}
