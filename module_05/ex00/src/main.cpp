#include "Bureaucrat.hpp"

int main()
{
	// Test the Bureaucrat class
	std::cout << "Testing the Bureaucrat Grade: " << std::endl;
	std::cout << std::endl;
	TEST_EXCEPTION(Bureaucrat b("John", 151), "Creating a bureaucrat with a grade of 151", Bureaucrat::GradeTooLowException);

	std::cout << std::endl;
	TEST_EXCEPTION(Bureaucrat b("John", 0), "Creating a bureaucrat with a grade of 0", Bureaucrat::GradeTooHighException);

	std::cout << std::endl;
	TEST_EXCEPTION(
		Bureaucrat b("John", 1);
		b.incrementGrade();
		,
		"Creating a bureaucrat with a grade of 1 and decrementing it",
		Bureaucrat::GradeTooHighException);

	std::cout << std::endl;
	TEST_EXCEPTION(
		Bureaucrat b("John", 150);
		b.decrementGrade();
		,
		"Creating a bureaucrat with a grade of 150 and incrementing it",
		Bureaucrat::GradeTooLowException);

	std::cout << std::endl;
	Bureaucrat teddy("Teddy", 150);
	std::cout << teddy << std::endl;
	return 0;
}