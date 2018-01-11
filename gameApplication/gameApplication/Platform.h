#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
using namespace sf;

class Platform {
public:

	Platform();

	void setSize(Vector2f size);

	void setPosition(Vector2f newPos);

	void setFillColor(Color color);

	void drawTo(RenderWindow &window);
	
private:

	RectangleShape platform;

};