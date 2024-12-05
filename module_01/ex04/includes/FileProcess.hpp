/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcess.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:31:21 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/05 12:08:51 by tsofien-         ###   ########.fr       */
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
private:
	std::string _file;
	std::string _s1;
	std::string _s2;

public:
	FileProcess();
	FileProcess(std::string file, std::string s1, std::string s2);
	static std::ifstream openInputFile(std::string file);
	static std::ofstream openOutputFile(std::string file);
	static std::string &customReplace(std::string &line, std::string s1, std::string s2);
	~FileProcess();
};

#endif