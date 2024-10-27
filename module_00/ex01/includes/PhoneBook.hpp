/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:33:45 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 15:18:53 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		size_t	_maxuser;
		size_t	_oldest;
		Contact	contacts[8];

	public:
		// constructor
		PhoneBook();
		PhoneBook(const PhoneBook &other);
		PhoneBook &operator=(const PhoneBook &other);
		~PhoneBook();
		
		// Getters & Setters
		size_t	get_maxuser();
		void	set_maxuser(size_t nb);
		
		//Methods
		void			add(const Contact &new_contact);
		void			search();
		void			display_all();
};

#endif