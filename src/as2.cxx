#include "as2.hpp"

namespace homework {

	Knight::Knight(const std::string& name)
    		: Entity{name} {}

	void Knight::attack() const {
		std::cout << name << " swings a " << weapon << "\n";
	}

	std::unique_ptr<Entity> Knight::clone() const {
		return std::make_unique<Knight>(*this);
	}

	void Knight::setWeapon(std::string new_weapon) {
		weapon = new_weapon;
	}

	Sorcerer::Sorcerer(const std::string& name)
		: Entity{name}{}

	void Sorcerer::attack() const {
		std::cout << name << " casts a " << ability << "\n";
	}

	std::unique_ptr<Entity> Sorcerer::clone() const {
		return std::make_unique<Sorcerer>(*this);
	}
	
	void Sorcerer::setAbility(std::string new_ability){
		ability = new_ability;	
	}

} // namespace homework
