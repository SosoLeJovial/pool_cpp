#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main()
{
	Intern someRandomIntern;
	ShrubberyCreationForm* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrf)
		delete (rrf);
	return 0;
}