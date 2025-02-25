#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	setColor(GREEN);
	std::cout << "Bureaucrat default constructor called" << std::endl;
	resetColor();
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade)
	: _name(name)
{
	setColor(GREEN);
	std::cout << "Bureaucrat parametized constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
	resetColor();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
	: _name(src._name), _grade(src._grade)
{
	setColor(GREEN);
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
	*this = src;
	resetColor();
}

Bureaucrat::~Bureaucrat()
{
	setColor(BLUE);
	std::cout << "Bureaucrat destructor called" << std::endl;
	resetColor();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	setColor(MAGENTA);
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	resetColor();
	return o;
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setGrade(unsigned int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade > 150)
		throw GradeTooLowException();
	else
		_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}
