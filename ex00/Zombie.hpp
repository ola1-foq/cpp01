/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:39:39 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:58:01 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string name_p;
	
	public:
		Zombie(const std::string &name);
		~Zombie();
		void announce() const;
};

Zombie *newZombie(const std::string &name);
void randomChump(const std::string &name);

#endif
