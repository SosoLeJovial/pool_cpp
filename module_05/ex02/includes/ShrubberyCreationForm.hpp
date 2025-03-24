#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#define SAPIN             \
	"       /\\       \n" \
	"      /  \\      \n" \
	"     /    \\     \n" \
	"    /      \\    \n" \
	"   /        \\   \n" \
	"  /__________\\  \n" \
	"       ||       \n"  \
	"       ||       \n"  \
	"\n"                  \
	"       /\\       \n" \
	"      /  \\      \n" \
	"     /    \\     \n" \
	"    /      \\    \n" \
	"   /        \\   \n" \
	"  /__________\\  \n" \
	"       ||       \n"  \
	"       ||       \n"

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExec;
	bool _signed;
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);
	virtual ~ShrubberyCreationForm();

	// getters  & setters
	std::string getTarget() const;

	void beSigned(const Bureaucrat &random);
	void execute(const Bureaucrat &executor) const;
	std::string getTypeForm() const;
};

#endif