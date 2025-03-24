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
	if (random.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException(_target + " could'nt sign!");
	_signed = true;
	setColor(GREEN);
	std::cout << random.getName() << " sign form for " << _target << std::endl;
	resetColor();
}

void RobotomyRequestForm::execute(const Bureaucrat &random) const
{
	setColor(ORANGE);
	std::cout << "*Makes some drilling noises*" << std::endl;
	resetColor();
	srand(time(0));
	if (random.getGrade() > this->_gradeToExec || (rand() % 2 == 0) || !getSigned())
		throw AForm::GradeTooLowException("Robotomy on " + _target + " failed.");
	setColor(GREEN);
	std::cout << _target << "has been robotomized successfully." << std::endl;
	resetColor();
}

std::string RobotomyRequestForm::getTypeForm() const
{
	return "RobotomyRequestForm";
}
