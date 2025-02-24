#ifndef BUREAUCRAT_HPP
#define BUREAU_HPP

#include <iostream>
#include <string>
#include "utils.hpp"

class Bureaucrat
{
private:
	const std::string _name;
	unsigned int _grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);

	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	class GradeTooHigh : public std::exception
	{
		virtual const char *what(char *e) const throw();
	};
	// Getters & Setters
	const std::string
	getName();
	unsigned int getGrade();
	void setGrade(int grade);

	// Methods
	void presentation();
	void incrementGrade();
	void decrementGrade();
};

#endif