#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include "Enemy.h"
using namespace sf;

class Platform {
public:

	Platform(float sizeX, float sizeY, float posX, float posY, Color color );

	bool collisionDetection(Enemy enemy);

	void drawTo(RenderWindow &window);
	
private:

	RectangleShape platform;
};