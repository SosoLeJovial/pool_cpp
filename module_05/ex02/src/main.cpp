#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat *Michel = new Bureaucrat("Michel", 1);
	Bureaucrat *PoPaul = new Bureaucrat("Popaul", 150);
	ShrubberyCreationForm *quaranteNeufTrois = new ShrubberyCreationForm("Charbo");
	PresidentialPardonForm *quaranteNeufTroisBis = new PresidentialPardonForm("Groland");
	RobotomyRequestForm *qntbb = new RobotomyRequestForm("L'hexagone");

	std::cout << "Tests for Shubbery: " << std::endl
			  << std::endl;
	TEST_EXCEPTIONS(
		Michel->executeForm(*quaranteNeufTrois);
		,
		"Test executeForm Bureaucrat high enough",
		AForm::GradeTooLowException);
	TEST_EXCEPTIONS(
		PoPaul->executeForm(*quaranteNeufTrois);
		,
		"Test executeForm Bureaucrat too low",
		AForm::GradeTooHighException);

	std::cout << "Tests for PresidentialPardonForm: " << std::endl
			  << std::endl;
	std::cout << "Tests for RobotomyRequestForm: " << std::endl
			  << std::endl;
	delete Michel;
	delete PoPaul;
	delete quaranteNeufTrois;
	delete quaranteNeufTroisBis;
	delete qntbb;
	return 0;
}