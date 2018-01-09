#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
using namespace sf;

class Platform {
public:

	Platform(Texture texture, Color color);

	void setPos(Vector2f newPos);

	void drawTo(RenderWindow &window);

	void collisionDetection();
	
private:

	Sprite platform;

};