#include "Bureaucrat.hpp"
#include "AForm.hpp"

// *******************************
//         CONSTRUCTORS
// *******************************

AForm::AForm()
	: _name("default"), _gradeToSign(150), _gradeToExec(150), _signed(false)
{
	setColor(GREEN);
	std::cout << "AForm default constructor called" << std::endl;
	resetColor();
}

AForm::AForm(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExec)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signed(false)
{
	setColor(GREEN);
	std::cout << "AForm parameterized constructor called" << std::endl;
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException("Grade is too low");
	else if (gradeToSign < 0 || gradeToExec < 0)
		throw AForm::GradeTooHighException("Grade is too High");
	resetColor();
}

AForm::AForm(const AForm &src)
	: _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec), _signed(src._signed)
{
	setColor(GREEN);
	std::cout << "AForm copy constructor called!" << std::endl;
	resetColor();
}

AForm::~AForm()
{
	setColor(BLUE);
	std::cout << "AForm destructor called" << std::endl;
	resetColor();
}

// *******************************
//       ASSIGNMENT OPERATOR
// *******************************

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

// *******************************
//         GETTERS
// *******************************

std::string AForm::getName() const
{
	return _name;
}

unsigned int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

unsigned int AForm::getGradeToExec() const
{
	return _gradeToExec;
}

// *******************************
//         MEMBER METHODS
// *******************************

void AForm::beSigned(const Bureaucrat &random)
{
	if (random.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException(random.getName() + " couldn't sign " + _name + "because his grade is too low.");
	setColor(ORANGE);
	std::cout << random.getName() << " signed " << _name << "." << std::endl;
	resetColor();
	_signed = true;
}

// *******************************
//        EXCEPTION CLASSES
// *******************************

AForm::GradeTooLowException::GradeTooLowException(const std::string msg) : _msg(msg) {}
AForm::GradeTooHighException::GradeTooHighException(const std::string msg) : _msg(msg) {}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}
AForm::GradeTooHighException::~GradeTooHighException() throw() {}

const char *AForm::GradeTooHighException::what() const throw()
{
	if (_msg.empty())
		return "Grade is too high";
	return _msg.c_str();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	if (_msg.empty())
		return "Grade is too low";
	return _msg.c_str();
}
