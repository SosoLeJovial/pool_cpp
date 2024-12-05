/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 00:33:08 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/05 11:53:29 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcess.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: there is an issue in the output." << std::endl;
		std::cerr << "Usage: parameters are <filename> <s1> <s2>!" << std::endl;
		return 1;
	}
	try
	{
		FileProcess sedForLosers = FileProcess(av[1], av[2], av[3]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

// bool open_file(std::fstream &file, std::string filename)
// {
// 	file.open(filename.c_str(), std::fstream::in);
// 	if (!file.is_open())
// 		return (false);
// 	return true;
// }

// std::string replace(std::string s, std::string r, std::string line)
// {
// 	if (line.empty())
// 		return (line);
// 	if (s.empty())
// 		return (line);
// 	line += '\n';
// 	size_t pos = line.find(s);

// 	while (pos != std::string::npos)
// 	{
// 		line.erase(pos, s.length());
// 		line.insert(pos, r);
// 		pos = line.find(s, pos + r.length());
// 	}
// 	return (line);
// }

// int main(int ac, char **av)
// {

// 	if (ac != 4)
// 	{
// 		std::cerr << "Error: parameters are <filename> <s1> <s2>!" << std::endl;
// 		return (1);
// 	}
// 	std::string searchStr = av[2];
// 	std::string replaceStr = av[3];
// 	std::string inputFile = av[1];
// 	std::string outputFile = std::string(av[1]) + ".replace";

// 	if (searchStr.empty() || inputFile.empty())
// 	{
// 		std::cerr << "Error: filename or s1 can't be empty" << std::endl;
// 		return (1);
// 	}

// 	std::fstream myFile;
// 	if (!open_file(myFile, av[1]))
// 	{
// 		std::cerr << "Error: cannot open " << inputFile << "!" << std::endl;
// 		return (1);
// 	}

// 	std::ofstream newFile(outputFile.c_str());
// 	if (!newFile.is_open())
// 	{
// 		myFile.close();
// 		std::cerr << "Error: cannot open the file!" << std::endl;
// 		return (1);
// 	}
// 	std::string line;
// 	while (std::getline(myFile, line))
// 	{
// 		std::string modifiedLine = replace(searchStr, replaceStr, line);
// 		newFile << modifiedLine;
// 	}
// 	newFile.close();
// 	myFile.close();
// 	return (0);
// }
