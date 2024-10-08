/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:14:57 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/06 19:11:54 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <Phonebook.hpp>
#include <Contact.hpp>

int main(int ac, char **argv) 
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        std::string str = argv[i];
        for (size_t j = 0; j < str.length(); j++)
            std::cout << (char)toupper(str[j]);
        if (i + 1 < ac)
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
