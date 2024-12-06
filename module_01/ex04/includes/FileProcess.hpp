/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcess.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:31:21 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/06 05:38:10 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FILEPROCESS_HPP
#define FILEPROCESS_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

class FileProcess
{
public:
	FileProcess();
	FileProcess(const std::string &file, const std::string &s1, const std::string &s2);
	static void processFile(const std::string &file, const std::string &s1, const std::string &s2);
	static void openOutputFile(const std::string &file, std::ofstream &newFile);
	static void openInputFile(const std::string &file, std::ifstream &fileToOpen);
	static std::string customReplace(const std::string &line, const std::string &s1, const std::string &s2);
	~FileProcess();
};

#endif