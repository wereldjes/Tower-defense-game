#pragma once
#include <SFML/Graphics.hpp>
#include "iostream"
using namespace sf;

class FontManager {
public:
	FontManager();

	~FontManager();

	void loadFont();

private:
	String text;

	Font myFont;
};

