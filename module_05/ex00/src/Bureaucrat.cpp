#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	setColor(GREEN);
	std::cout << "Bureaucrat default constructor called" << std::endl;
	resetColor();
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
	: _name(name)
{
	setColor(GREEN);
	std::cout << "Bureaucrat parametized constructor called" << std::endl;
	if (grade < 0 || grade > 150)
	{
		setColor(RED);
		throw GradeTooHigh("this grade cannot be given");
		resetColor();
		return;
	}
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
	setColor(RED);
	std::cout << "Bureaucrat destructor called" << std::endl;
	resetColor();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

const std::string Bureaucrat::getName()
{
	return _name;
}

int Bureaucrat::getGrade()
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 0 || grade > 150)
	{
		std::cout << "This grade cannot be given!" << std::endl;
		return;
	}
	_grade = grade;
}

void Bureaucrat::presentation()
{
	setColor(BLUE);
	std::cout << "My name is " << _name << "and my grade is " << _grade << std::endl;
	resetColor();
}

void Bureaucrat::incrementGrade()
{
}

void Bureaucrat::decrementGrade()
{
}