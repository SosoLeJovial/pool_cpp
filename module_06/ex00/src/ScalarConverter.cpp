#include "ScalarConverter.hpp"
#include <algorithm>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter &cpy) { (void)cpy; }

ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs)
{
	(void)rhs;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string value)
{
	char a = 0;
	int b;
	// float c;
	// double d;

	setColor(CYAN);
	try
	{
		if (value.length() == 3 && value.find_first_not_of("0123456789") == std::string::npos)
		{
			b = stoi(value);
			if (b >= 33 && b <= 127)
				a = b;
			else
				std::cout << "non displayable" << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "char: " << a << std::endl;
	// setColor(GREEN);
	// std::cout << "int: " << b << std::endl;
	// setColor(YELLOW);
	// std::cout << "float: " << c << std::endl;
	// setColor(MAGENTA);
	// std::cout << "double: " << d << std::endl;
	resetColor();
}