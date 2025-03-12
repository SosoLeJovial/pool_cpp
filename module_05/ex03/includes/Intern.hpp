#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "utils.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// *******************************
//           CLASS
// *******************************

class AForm;

class Intern
{
private:
	
	public:
	// *******************************
	//         CONSTRUCTORS
	// *******************************
	Intern();
	Intern(Intern const &src);
	~Intern();

	// *******************************
	//      ASSIGNMENT OPERATOR
	// *******************************
	Intern &operator=(Intern const &rhs);

	// *******************************
	//          METHODS
	// *******************************
	AForm *makeForm(std::string name, std::string target);
	AForm* createRobotomyForm(std::string const &target);
	AForm* createShrubberyForm(std::string const &target);
	AForm* createPresidentialForm(std::string const &target);


};

#endif
