/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 00:33:08 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/26 23:44:14 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool isValidString(const std::string str)
{
	return str.find_first_not_of("\n\t\r") != std::string::npos;
}

bool open_file(std::fstream &file, std::string filename)
{

	file.open(filename.c_str(), std::fstream::in);
	if (!file.is_open())
		return (false);
	return true;
}

std::string replace(std::string s, std::string r, std::string line)
{
	if (s.empty() || r.empty() || line.empty())
		return (line);
	size_t pos = line.find(s);

	while (pos != std::string::npos)
	{
		line.erase(pos, s.length());
		line.insert(pos, r);
		pos = line.find(s, pos + r.length());
	}
	return (line);
}

int main(int ac, char **av)
{

	if (ac != 4)
	{
		std::cerr << "Error: parameters are <filename> <s1> <s2>!" << std::endl;
		return (1);
	}
	std::string searchStr = av[2];
	std::string replaceStr = av[3];
	std::string inputFile = av[1];
	std::string outputFile = std::string(av[1]) + ".replace";

	if (!isValidString(searchStr))
	{
		std::cerr << "Error: <s1> can't be empty!" << std::endl;
		return (1);
	}
	std::fstream myFile;
	if (!open_file(myFile, av[1]))
	{
		std::cerr << "Error: cannot open " << inputFile << "!" << std::endl;
		return (1);
	}

	std::ofstream newFile(outputFile.c_str());
	if (!newFile.is_open())
	{
		myFile.close();
		std::cerr << "Error: cannot open the file!" << std::endl;
		return (1);
	}
	std::string line;
	bool first = true;
	while (std::getline(myFile, line))
	{
		if (!first)
			newFile << "\n";
		first = false;
		std::string modifiedLine = replace(searchStr, replaceStr, line);
		newFile << modifiedLine;
	}
	newFile.close();
	myFile.close();
	return (0);
}
