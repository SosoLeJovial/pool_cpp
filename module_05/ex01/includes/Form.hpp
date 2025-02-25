#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "utils.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExec;
	bool _signed;

public:
	Form();
	Form(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExec);
	Form(Form const &src);
	~Form();

	Form &operator=(Form const &rhs);

	void beSigned(const Bureaucrat &random);

	// Exceptions
	class GradeTooHighException : public std::exception
	{
	private:
		std::string _msg;

	public:
		GradeTooHighException(const std::string msg);
		virtual const char *what() const throw();
		virtual ~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string _msg;

	public:
		GradeTooLowException() {}
		GradeTooLowException(const std::string msg);
		virtual const char *what() const throw();
		virtual ~GradeTooLowException() throw();
	};
};

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
