#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */)
	: _target(""), _gradeToSign(72), _gradeToExec(45), _signed(false) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: _target(target), _gradeToSign(72), _gradeToExec(45), _signed(false) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: _target(src._target), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToSign), _signed(src._signed)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
		this->_signed = rhs.getSigned();
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

// Getters & Setters
std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

bool RobotomyRequestForm::getSigned() const
{
	return _signed;
}

unsigned int RobotomyRequestForm::getGradeToExec() const
{
	return _gradeToExec;
}

unsigned int RobotomyRequestForm::getGradeToSign() const
{
	return _gradeToSign;
}

// methods
void RobotomyRequestForm::beSigned(const Bureaucrat &random)
{
	setColor(ORANGE);
	std::cout << "*Makes some drilling noises*" << std::endl;
	resetColor();
	if (random.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException("Robotomy on " + _target + "failed.");
	if (random.getGrade() > this->_gradeToExec)
		throw AForm::GradeTooLowException("Robotomy on " + _target + "failed.");
	std::cout << _target << "has been robotomized successfully 50% of the time." << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &random)
{
	(void)random;
	std::cout << "prout" << std::endl;
}

std::string RobotomyRequestForm::getTypeForm() const
{
	return "RobotomyRequestForm";
}
