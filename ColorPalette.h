#pragma once
#include<string>
namespace LegueStats {
	using namespace System::Drawing;

	struct RGB {
		int r;
		int g;
		int b;

		Color get() {
			return Color::FromArgb(r, g, b);
		}
	};

	RGB primaryBackgroundColor = { 0, 83, 119 };
	
	RGB buttonColor = { 81, 203, 32 };
	RGB textColor = { 251, 175, 0 };
	RGB descriptionBackgroundColor = { 255, 255, 255 };
}
