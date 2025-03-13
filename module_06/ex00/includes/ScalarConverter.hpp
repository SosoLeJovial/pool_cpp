#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string.h>
#include <iostream>
#include <algorithm>
#include "utils.hpp"

class ScalarConverter
{
private:
public:
	ScalarConverter(/* args */);
	ScalarConverter(ScalarConverter &cpy);
	ScalarConverter &operator=(ScalarConverter &rhs);
	~ScalarConverter();

	virtual void virtualMethod() = 0;

	static void convert(std::string value);
};

#endif