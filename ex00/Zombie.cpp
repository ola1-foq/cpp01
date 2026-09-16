/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:39:28 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:57:53 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string &name) : name_p(name)
{
}

Zombie::~Zombie()
{
	std::cout << name_p << " has been destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << name_p << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
