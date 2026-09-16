/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:41:12 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:58:26 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name_p;
	public:
		Zombie();
		~Zombie();	
		void setName(const std::string &name);
		void announce() const;
};
Zombie *zombieHorde(int count, const std::string &name);

#endif
