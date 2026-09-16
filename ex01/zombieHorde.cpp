/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:41:15 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:41:53 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int count, const std::string &name)
{
	if (count <= 0)
		return (0);
	Zombie *horde = new Zombie[count];
	for (int i = 0; i < count; ++i)
		horde[i].setName(name);
	return (horde);
}
