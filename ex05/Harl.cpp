/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:55:01 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:55:07 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() const
{
	std::cout << "I love having extra bacon for my " "7XL-double-cheese-triple-pickle-special-ketchup burger. " "I really do!" << std::endl;
}

void Harl::info() const
{
	std::cout << "I cannot believe adding extra bacon costs more money. " "You did not put enough bacon in my burger! " "If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning() const
{
	std::cout << "I think I deserve to have some extra bacon for free. " "I have been coming for years, whereas you started working here " "since last month." << std::endl;
}

void Harl::error() const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string &level) const
{
	typedef void (Harl::*Complaint)() const;

	static const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static const Complaint complaints[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*complaints[i])();
			return;
		}
	}
}
