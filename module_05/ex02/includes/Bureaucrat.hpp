#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"
#include "utils.hpp"

// *******************************
//           CLASS
// *******************************

class AForm;

class Bureaucrat
{
private:
	const std::string _name;
	unsigned int _grade;
	Bureaucrat();

public:
	// *******************************
	//         CONSTRUCTORS
	// *******************************
	Bureaucrat(const std::string &name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	// *******************************
	//      ASSIGNMENT OPERATOR
	// *******************************
	Bureaucrat &operator=(Bureaucrat const &rhs);

	// *******************************
	//        GETTERS & SETTERS
	// *******************************
	const std::string &getName() const;
	unsigned int getGrade() const;
	void setGrade(unsigned int grade);

	// *******************************
	//          METHODS
	// *******************************
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm &toSign);
	void executeForm(AForm &form);

	// *******************************
	//        EXCEPTION CLASSES
	// *******************************
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

// *******************************
//     OVERLOADED OPERATORS
// *******************************
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

// *******************************
//         TEST MACRO
// *******************************
#define TEST_EXCEPTION(code, description, expected_exception)                                    \
	try                                                                                          \
	{                                                                                            \
		setColor(CYAN);                                                                          \
		std::cout << description << std::endl;                                                   \
		resetColor();                                                                            \
		code;                                                                                    \
		setColor(YELLOW);                                                                        \
		std::cout << "Expected exception: " #expected_exception " was not thrown." << std::endl; \
		resetColor();                                                                            \
	}                                                                                            \
	catch (const expected_exception &e)                                                          \
	{                                                                                            \
		setColor(YELLOW);                                                                        \
		std::cout << "Caught expected exception: " << e.what() << std::endl;                     \
		resetColor();                                                                            \
	}                                                                                            \
	catch (const std::exception &e)                                                              \
	{                                                                                            \
		setColor(YELLOW);                                                                        \
		std::cout << "Unexpected exception caught: " << e.what() << std::endl;                   \
		resetColor();                                                                            \
	}                                                                                            \
	catch (...)                                                                                  \
	{                                                                                            \
		setColor(RED);                                                                           \
		std::cout << "test failed" << std::endl;                                                 \
		std::cout << "Unknown exception caught." << std::endl;                                   \
		resetColor();                                                                            \
	}

#endif
