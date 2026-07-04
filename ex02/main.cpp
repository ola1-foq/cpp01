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
	std::string NORM = "normal string";
	std::string *PTR = &NORM;
	std::string &REFR = NORM;

	std::cout << "Address of string: " << &NORM << std::endl;
	std::cout << "Address held by stringPTR: " << PTR << std::endl;
	std::cout << "Address held by stringREF: " << &REFR << std::endl;

	std::cout << "Value of string: " << NORM << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *PTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << REFR << std::endl;
	return (0);
}
