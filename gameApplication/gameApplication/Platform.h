#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>

using namespace sf;

class Platform {
public:

	Platform(float sizeX, float sizeY, float posX, float posY, Color color );

	void drawTo(RenderWindow &window);

	FloatRect getGlobalBoundsOfPlatform();
	
private:

	RectangleShape platform;
};