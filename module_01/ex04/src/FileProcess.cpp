/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcess.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:40:24 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/05 12:05:34 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcess.hpp"

FileProcess::FileProcess() {}

FileProcess::FileProcess(std::string file, std::string s1, std::string s2)
{
	if (s1.empty())
		throw std::invalid_argument("Error: s1 can't be empty!");
	std::ifstream input = openInputFile(file);
	std::ofstream Output = openOutputFile(file + ".replace");

	std::string line;
	while (getline(input, line))
		Output << customReplace(line, s1, s2);
}

std::ifstream FileProcess::openInputFile(std::string file)
{
	if (file.empty())
		throw std::invalid_argument("Error: name's file cannot be empty!");
	std::ifstream fileToOpen(file.c_str());
	if (!fileToOpen.is_open())
		throw std::runtime_error("Error: can not read " + file);
	return fileToOpen;
}

std::ofstream FileProcess::openOutputFile(std::string file)
{
	std::ofstream newFile((file + ".replace").c_str());

	if (!newFile.is_open())
		throw std::runtime_error("Error: can not create " + file);
	return newFile;
}

static std::string &customReplace(std::string &line, std::string s1, std::string s2)
{
	if (line.empty())
		return (line);
	if (s1.empty())
		return (line);
	line + '\n';
	size_t pos = line.find(s1);

	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.length());
	}
	return (line);
}

FileProcess::~FileProcess() {}
