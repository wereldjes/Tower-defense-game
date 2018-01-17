#include "stdafx.h"
#include "FontManager.h"


FontManager::FontManager() {
}


FontManager::~FontManager() {
}

Text FontManager::setText(String string, float posX, float posY) {
	if (!myFont.loadFromFile("arial.ttf")) {
		std::cout << "font isnt working";
	}
	text.setFont(myFont);
	text.setCharacterSize(30);
	text.setString(string);
	text.setFillColor(Color::Black);
	text.setPosition(Vector2f(posX, posY));

	return text;
}

void FontManager::drawTo(Text text, RenderWindow &window) {
	window.draw(text);
}