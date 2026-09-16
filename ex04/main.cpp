/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:50:41 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:53:10 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static std::string replaceAll(const std::string &content, const std::string &from, const std::string &to)
{
	std::string result;
	std::string::size_type start = 0;
	std::string::size_type found = content.find(from);

	while (found != std::string::npos)
	{
		result.append(content, start, found - start);
		result.append(to);
		start = found + from.length();
		found = content.find(from, start);
	}
	result.append(content, start, std::string::npos);
	return (result);
}

static bool readFile(const std::string &fileName, std::string &content)
{
	std::ifstream input(fileName.c_str());

	if (!input)
		return (false);

	std::ostringstream buffer;
	buffer << input.rdbuf();
	content = buffer.str();
	return (true);
}

static bool writeFile(const std::string &fileName, const std::string &content)
{
	std::ofstream output(fileName.c_str());

	if (!output)
		return (false);
	output << content;
	return (output.good());
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>"
			<< std::endl;
		return (1);
	}

	const std::string fileName = argv[1];
	const std::string search = argv[2];
	const std::string replacement = argv[3];

	if (search.empty())
	{
		std::cerr << "Error: search string cannot be empty" << std::endl;
		return (1);
	}

	std::string content;
	if (!readFile(fileName, content))
	{
		std::cerr << "Error: cannot open " << fileName << std::endl;
		return (1);
	}

	const std::string outputName = fileName + ".replace";
	if (!writeFile(outputName, replaceAll(content, search, replacement)))
	{
		std::cerr << "Error: cannot write " << outputName << std::endl;
		return (1);
	}
	return (0);
}
