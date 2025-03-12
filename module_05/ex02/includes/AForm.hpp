#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "utils.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExec;
	bool _signed;

public:
	// Constructors & Destructor
	AForm();
	AForm(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExec);
	AForm(AForm const &src);
	~AForm();

	// Operator Overload
	AForm &operator=(AForm const &rhs);

	// Member Functions
	virtual void beSigned(const Bureaucrat &random) = 0;
	virtual std::string getTypeForm() const = 0;
	virtual void execute(const Bureaucrat &executor) = 0;
	
	// Getters
	std::string getName() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExec() const;


	// Exceptions
	class GradeTooHighException : public std::exception
	{
	private:
		std::string _msg;

	public:
		explicit GradeTooHighException(const std::string msg);
		virtual const char *what() const throw();
		virtual ~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string _msg;

	public:
		GradeTooLowException() {}
		explicit GradeTooLowException(const std::string msg);
		virtual const char *what() const throw();
		virtual ~GradeTooLowException() throw();
	};
};

// Macro for Exception Testing
#define TEST_EXCEPTIONS(code, description, expected_exception)                                   \
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

#endif // AForm_HPP
