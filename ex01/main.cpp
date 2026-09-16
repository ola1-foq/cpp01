/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:41:05 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:42:11 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	const int count = 5;
	Zombie *horde = zombieHorde(count, "HORDE");

	if (!horde)
		return (1);
	for (int i = 0; i < count; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}
