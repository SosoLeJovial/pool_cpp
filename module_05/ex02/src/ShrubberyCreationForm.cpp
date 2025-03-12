#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: _target(""), _gradeToSign(145), _gradeToExec(137), _signed(false) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: _target(target), _gradeToSign(145), _gradeToExec(137), _signed(false) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	: _target(src._target), _gradeToSign(145), _gradeToExec(137), _signed(src._signed) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	(void)_gradeToExec;
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_signed = rhs._signed;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// getters  & setters
std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &random)
{
	if (random.getGrade() < this->_gradeToSign)
		throw AForm::GradeTooLowException(random.getName() + " couldn't sign " + _target);
	_signed = true;
}

void ShrubberyCreationForm::execute(const Bureaucrat &random)
{
	if (random.getGrade() < this->_gradeToExec && !_signed)
		throw AForm::GradeTooLowException(random.getName() + " couldn't exec " + _target);
	std::string filename = _target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	outfile << SAPIN << std::endl;
	outfile.close();
}

std::string ShrubberyCreationForm::getTypeForm() const
{
	return "ShrubberyCreationForm";
}
