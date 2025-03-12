#include "Intern.hpp"

// *******************************
//         CONSTRUCTORS
// *******************************
Intern::Intern() {}
Intern::Intern(Intern const &src) 
{
	*this = src;
}
Intern::~Intern() {}

// *******************************
//      ASSIGNMENT OPERATOR
// *******************************
Intern &Intern::operator=(Intern const &rhs) {
	(void) rhs;
	return *this;
}

// *******************************
//          METHODS
// *******************************

AForm* Intern::createRobotomyForm(std::string const &target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyForm(std::string const &target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createPresidentialForm(std::string const &target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string levels[3] = {"robotomy request",
							 "shrubbery creation",
							 "presidential pardon"};
	AForm* (Intern::*constructors[])(std::string const &) = {
		&Intern::createRobotomyForm,
		&Intern::createShrubberyForm,
		&Intern::createPresidentialForm
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (name.find(levels[i]) != std::string::npos)
		{
			setColor(GREEN);
			std::cout << "Inter creates Form " << name << std::endl;
			resetColor();
			return (this->*constructors[i])(target);
		}
	}
	setColor(RED);
	std::cout << "Inter couldn't create Form " << name << std::endl;
	resetColor();
	return NULL;
}