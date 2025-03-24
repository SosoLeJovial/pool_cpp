#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	TEST_EXCEPTION(
		Bureaucrat teddy("Teddy", 150);
		std::cout << teddy << std::endl;
		Form myform("b-48h2", 1, 1);
		myform.beSigned(teddy),
		"Exception too low to sign",
		Form::GradeTooLowException);

	std::cout << std::endl;
	TEST_EXCEPTION(
		Bureaucrat randy("randy", 15);
		Form c("39-40", 15, 15);
		randy.signForm(c),
		"Test Method SignForm Bureaucrat",
		Form::GradeTooLowException);

	return 0;
}