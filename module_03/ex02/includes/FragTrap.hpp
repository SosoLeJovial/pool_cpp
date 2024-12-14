#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void highFivesGuys(void);
};

#endif /* ******************************************************** FRAGTRAP_H */