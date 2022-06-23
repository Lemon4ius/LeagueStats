#pragma once

#include <string>
#include <vector>

namespace LegueStats {

	using namespace System;

	ref struct Skill {
		String^ title;
		String^ description;
		String^ pictureName;
		String^ videoUrl;
	};

	ref struct Hero {
		String^ title;
		String^ description;

		int health;
		int armor;
		int damage;
		int criticalDamage;
		int mana;
		int speed;
		int maxItems;

		Collections::Generic::List<Skill^>^ skills;
	};
}
