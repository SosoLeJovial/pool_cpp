/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/11 06:22:52 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <string>
#include <sstream>

// int main()
// {
// 	const Dog *j = new Dog();
// 	const Cat *i = new Cat();
// 	delete j;
// 	delete i;
// 	return 0;
// }

int main()
{
	const Dog *dog = new Dog();
	const Cat *cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	Cat bv = *cat;
	for (size_t i = 0; i < 100; i++)
	{
		bv.setBrain(i, "Idea Nice");
	}
	Brain catBrain = bv.getBrain();

	for (size_t i = 0; i < 100; i++)
	{
		std::string idea = *(catBrain).getIdeas();
		std::cout << idea << std::endl;
	}
	delete dog;
	delete cat;
	return 0;
}
