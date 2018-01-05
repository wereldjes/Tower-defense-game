#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;

class Platform {
public:

	Platform(Vector2f size, Color color) {
		platform.setFillColor(color);
		platform.setSize(size);
	}

	void setPos(Vector2f newPos) {
		platform.setPosition(newPos);
	}
	
private:

	RectangleShape platform;

};