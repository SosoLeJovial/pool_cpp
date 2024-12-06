/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcess.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:40:24 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/06 07:22:47 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcess.hpp"

FileProcess::FileProcess() {}

FileProcess::FileProcess(const std::string &file, const std::string &s1, const std::string &s2)
{
	processFile(file, s1, s2);
}

void FileProcess::processFile(const std::string &file, const std::string &s1, const std::string &s2)
{
	if (s1.empty())
		throw std::invalid_argument("Error: s1 can't be empty!");
	std::ifstream input;
	std::ofstream output;

	openInputFile(file, input);
	openOutputFile(file + ".replace", output);

	std::string line;
	while (getline(input, line))
		output << customReplace(line, s1, s2);
}

void FileProcess::openInputFile(const std::string &file, std::ifstream &fileToOpen)
{
	if (file.empty())
		throw std::invalid_argument("Error: name's file cannot be empty!");
	fileToOpen.open(file.c_str());
	if (!fileToOpen.is_open())
		throw std::runtime_error("Error: can not read " + file);
}

void FileProcess::openOutputFile(const std::string &file, std::ofstream &newFile)
{
	newFile.open(file.c_str());
	if (!newFile.is_open())
		throw std::runtime_error("Error: can not create " + file);
}

std::string FileProcess::customReplace(const std::string &line, const std::string &s1, const std::string &s2)
{
	if (line.empty())
		return (line);
	if (s1.empty())
		return (line);
	std::string newLine = line;
	newLine += '\n';
	size_t pos = newLine.find(s1);
	while (pos != std::string::npos)
	{
		newLine.erase(pos, s1.length());
		newLine.insert(pos, s2);
		pos = newLine.find(s1, pos + s2.length());
	}
	return (newLine);
}

FileProcess::~FileProcess() {}
