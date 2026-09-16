/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:42:57 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:45:09 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	const std::string string = "HI THIS IS BRAIN";
	const std::string *stringPTR = &string;
	const std::string &stringREF = string;

	std::cout << "The address of the string variable is: " << &string << std::endl;
	std::cout << "The address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "The address held by stringREF is: " << &stringREF << std::endl;

	std::cout << "The value of the string variable is: " << string << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;
	return (0);
}
