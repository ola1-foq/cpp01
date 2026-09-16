/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:41:09 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:58:23 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie() : name_p("Nameless")
{
}

Zombie::~Zombie()
{
	std::cout << name_p << " has been destroyed" << std::endl;
}

void Zombie::setName(const std::string &name)
{
	name_p = name;
}

void Zombie::announce() const
{
	std::cout << name_p << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
