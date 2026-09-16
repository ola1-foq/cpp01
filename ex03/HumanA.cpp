/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:46:53 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 18:00:37 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name_p(name), weapon_(weapon)
{
}

void HumanA::attack() const
{
	std::cout << name_p << " attacks with their " << weapon_.getType() << std::endl;
}
