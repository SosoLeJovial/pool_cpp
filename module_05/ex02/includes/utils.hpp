#ifndef UTILS_HPP
#define UTILS_HPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define ORANGE "\033[93m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
#define PINK "\033[38;5;206m"

#include <iostream>
#include <string>

void setColor(std::string color);
void resetColor();

#endif /* ********************************************************** UTILS_H */