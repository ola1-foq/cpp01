/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:39:01 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:42:23 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *heapZombie = newZombie("HEAPP");
	heapZombie->announce();
	delete heapZombie;

	randomChump("STACKKKK");
	return (0);
}
