/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 00:00:00 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/07/04 00:00:00 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years, whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain(const std::string &level) const
{
	typedef void (Harl::*Complaint)(void) const;

	static const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static const Complaint complaints[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;

	while (i < 4 && levels[i] != level)
		++i;
	switch (i)
	{
		case 0:
			(this->*complaints[0])();
		case 1:
			(this->*complaints[1])();
		case 2:
			(this->*complaints[2])();
		case 3:
			(this->*complaints[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
