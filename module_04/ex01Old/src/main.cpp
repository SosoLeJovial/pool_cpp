/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/17 22:07:49 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const int size = 10;
	Animal **animals = new Animal *[size];

	for (int i = 0; i < size / 2; ++i)
	{
		animals[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = size / 2; i < size; ++i)
	{
		animals[i] = new Dog();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < size; ++i)
	{
		delete animals[i];
	}
	return 0;
}