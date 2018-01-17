#pragma once
#include <SFML/Graphics.hpp>
#include "iostream"
using namespace sf;

class FontManager {
public:
	FontManager();

	~FontManager();

	Text setText(String string, float posX, float posY);

	void drawTo(Text text,RenderWindow &window);

private:
	Text text;

	Font myFont;
};

