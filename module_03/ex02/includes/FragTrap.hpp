/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 00:19:51 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/23 00:31:25 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void highFivesGuys(void);
};

#endif /* ******************************************************** FRAGTRAP_H */