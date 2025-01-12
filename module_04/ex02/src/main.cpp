/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/12 20:04:01 by tsofien-         ###   ########.fr       */
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

	delete dog;
	delete cat;
	return 0;
}
