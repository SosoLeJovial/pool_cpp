#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac > 2)
		return 1;
	std::cout << av[1] << std::endl;
	ScalarConverter::convert(av[1]);
	return 0;
}