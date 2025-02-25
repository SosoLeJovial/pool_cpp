#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "utils.hpp"

class Bureaucrat
{
private:
	const std::string _name;
	unsigned int _grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);

	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	// Getters & Setters
	const std::string &getName() const;
	unsigned int getGrade() const;
	void setGrade(unsigned int grade);

	// Methods
	void incrementGrade();
	void decrementGrade();

	// exceptions
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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

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