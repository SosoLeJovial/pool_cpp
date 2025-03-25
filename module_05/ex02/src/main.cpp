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

	// AForm *test = new AForm();

	setColor(RED);
	std::cout << "..............................................." << std::endl;
	std::cout << "Tests for Shubbery: " << std::endl
			  << std::endl;
	resetColor();

	TEST_EXCEPTIONS(
		PoPaul->signForm(*quaranteNeufTrois);
		Michel->executeForm(*quaranteNeufTrois),
		"Test executeForm Bureaucrat high enough to execute form",
		AForm::GradeTooLowException);
	TEST_EXCEPTIONS(
		PoPaul->executeForm(*quaranteNeufTrois),
		"Test executeForm Bureaucrat too low to execute it",
		AForm::GradeTooHighException);

	setColor(RED);
	std::cout << "..............................................." << std::endl;
	std::cout << "Tests for PresidentialPardonForm: " << std::endl
			  << std::endl;
	resetColor();

	TEST_EXCEPTIONS(
		Michel->executeForm(*quaranteNeufTroisBis),
		"Test executeForm Bureaucrat but form is not signed",
		AForm::GradeTooLowException);

	TEST_EXCEPTIONS(
		quaranteNeufTroisBis->beSigned(*Michel);
		Michel->executeForm(*quaranteNeufTroisBis),
		"Test execute Bureaucrat too low",
		AForm::GradeTooLowException);

	setColor(RED);
	std::cout << "..............................................." << std::endl;
	std::cout << "Tests for RobotomyRequestForm: " << std::endl
			  << std::endl;
	resetColor();

	TEST_EXCEPTIONS(
		qntbb->beSigned(*Michel);
		Michel->executeForm(*qntbb),
		"Test executeForm Bureaucrat high enough",
		AForm::GradeTooLowException);
	TEST_EXCEPTIONS(
		PoPaul->executeForm(*qntbb),
		"Test executeForm Bureaucrat too low",
		AForm::GradeTooHighException);

	setColor(RED);
	std::cout << "..............................................." << std::endl;
	resetColor();

	delete Michel;
	delete PoPaul;
	delete quaranteNeufTrois;
	delete quaranteNeufTroisBis;
	delete qntbb;
	return 0;
}