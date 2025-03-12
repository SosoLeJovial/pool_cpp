#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExec;
	bool _signed;

public:
	PresidentialPardonForm(/* args */);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);

	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	virtual ~PresidentialPardonForm();

	// getters & setters
	std::string getTarget() const;
	bool getSigned() const;
	unsigned int getGradetoSign() const;
	unsigned int getGradetoExec() const;
	std::string getTypeForm() const;                         

	// methods
	void beSigned(const Bureaucrat &random);
	void execute(const Bureaucrat &executor);
};

#endif