#include "Bureaucrat.hpp"
#include "Form.hpp"

// *******************************
//         CONSTRUCTORS
// *******************************

Form::Form()
	: _name("default"), _gradeToSign(150), _gradeToExec(150), _signed(false)
{
	setColor(GREEN);
	std::cout << "Form default constructor called" << std::endl;
	resetColor();
}

Form::Form(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExec)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signed(false)
{
	setColor(GREEN);
	std::cout << "Form parameterized constructor called" << std::endl;
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException("Grade is too low");
	else if (gradeToSign < 0 || gradeToExec < 0)
		throw Form::GradeTooHighException("Grade is too High");
	resetColor();
}

Form::Form(const Form &src)
	: _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec), _signed(src._signed)
{
	setColor(GREEN);
	std::cout << "Form copy constructor called!" << std::endl;
	resetColor();
}

Form::~Form()
{
	setColor(BLUE);
	std::cout << "Form destructor called" << std::endl;
	resetColor();
}

// *******************************
//       ASSIGNMENT OPERATOR
// *******************************

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

// *******************************
//         GETTERS
// *******************************

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

// *******************************
//         MEMBER METHODS
// *******************************

void Form::beSigned(const Bureaucrat &random)
{
	if (random.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException(random.getName() + " couldn't sign " + _name + "because his grade is too low.");
	setColor(ORANGE);
	std::cout << random.getName() << " signed " << _name << "." << std::endl;
	resetColor();
	_signed = true;
}

// *******************************
//        EXCEPTION CLASSES
// *******************************

Form::GradeTooLowException::GradeTooLowException(const std::string msg) : _msg(msg) {}
Form::GradeTooHighException::GradeTooHighException(const std::string msg) : _msg(msg) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
	if (_msg.empty())
		return "Grade is too high";
	return _msg.c_str();
}

const char *Form::GradeTooLowException::what() const throw()
{
	if (_msg.empty())
		return "Grade is too low";
	return _msg.c_str();
}
