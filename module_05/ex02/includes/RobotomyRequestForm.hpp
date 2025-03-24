#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cmath>

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExec;
	bool _signed;

public:
	RobotomyRequestForm(/* args */);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	virtual ~RobotomyRequestForm();

	// Getters & Setters
	std::string getTarget() const;
	bool getSigned() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExec() const;

	// methods
	void beSigned(const Bureaucrat &random);
	void execute(const Bureaucrat &executor) const;
	std::string getTypeForm() const;
};

#endif