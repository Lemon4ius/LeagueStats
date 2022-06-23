#pragma once

namespace LegueStats {
	ref struct Item {
		System::String^ title;
		System::String^ description;
		System::String^ pictureName;

		int health;
		int armor;
		int damage;
		int criticalDamage;
		int mana;
		int speed;
	};
}