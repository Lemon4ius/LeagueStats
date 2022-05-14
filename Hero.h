#pragma once

#include <string>
#include <vector>

namespace LegueStats {

	using namespace System;

	struct Skill {
		std::string title;
		std::string description;
		std::string pictureName;
		std::string gifName;

		String^ getTitle() {
			return toString(title);
		}

		String^ getDescription() {
			return toString(description);
		}

		String^ getPictureName() {
			return toString(pictureName);
		}

		String^ getGifName() {
			return toString(gifName);
		}

	private: String^ toString(std::string str) {
		return gcnew String(str.data());
	}
	};

	struct Hero {
		std::string title;
		std::string description;
		std::string picturesDir;
		std::vector<Skill> skills;

		String^ getTitle() {
			return toString(title);
		}

		String^ getDescription() {
			return toString(description);
		}

		String^ getPicuresDir() {
			return toString(picturesDir);
		}

	private: String^ toString(std::string str) {
		return gcnew String(str.data());
	}
	};

	std::vector<Hero> heroes;
}
