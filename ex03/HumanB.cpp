#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name_p(name), weapon_(NULL)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	weapon_ = &weapon;
}

void HumanB::attack() const
{
	if (weapon_)
		std::cout << name_p << " attacks with their " << weapon_->getType()
			<< std::endl;
}
