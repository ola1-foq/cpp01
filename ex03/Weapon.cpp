/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalfoqha <oalfoqha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:49:50 by oalfoqha          #+#    #+#             */
/*   Updated: 2026/06/19 17:49:51 by oalfoqha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type_(type)
{
}

const std::string &Weapon::getType() const
{
	return (type_);
}

void Weapon::setType(const std::string &type)
{
	type_ = type;
}
