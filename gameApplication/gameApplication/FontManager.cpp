#include "stdafx.h"
#include "FontManager.h"


FontManager::FontManager() {
}


FontManager::~FontManager() {
}

void FontManager::loadFont() {
	if (!myFont.loadFromFile("arial.ttf")) {
		std::cout << "font isnt working";
	}
}
