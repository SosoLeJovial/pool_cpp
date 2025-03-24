#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */)
	: _target(""), _gradeToSign(25), _gradeToExec(5), _signed(false) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: _target(target), _gradeToSign(25), _gradeToExec(5), _signed(false) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: _target(src.getTarget()), _gradeToSign(25), _gradeToExec(5), _signed(src.getSigned())
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_signed = rhs._signed;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// getters & setters
std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

bool PresidentialPardonForm::getSigned() const
{
	return _signed;
}

unsigned int PresidentialPardonForm::getGradetoSign() const
{
	return _gradeToSign;
}

unsigned int PresidentialPardonForm::getGradetoExec() const
{
	return _gradeToExec;
}

// methods

void PresidentialPardonForm::beSigned(const Bureaucrat &random)
{
	if (random.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException(random.getName() + "'s grade is too low to sign!");
	_signed = true;
	setColor(GREEN);
	std::cout << random.getName() << " signed " << this->getName() << std::endl;
	resetColor();
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > _gradeToExec || !getSigned())
		throw AForm:: GradeTooLowException(executor.getName() + "'s grade is too low to sign!");
	setColor(GREEN);
	std::cout << _target << " has been pardoned by Zaphod beelblerox." << std::endl;
	resetColor();
}

std::string PresidentialPardonForm::getTypeForm() const
{
	return "PresidentialPardonForm";
}
