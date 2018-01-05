#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;

class Platform {
public:

	Platform(Texture texture, Color color) {
		platform.setColor(color);
		platform.setTexture(texture);
	}

	void setPos(Vector2f newPos) {
		platform.setPosition(newPos);
	}

	void drawTo(RenderWindow &window) {
		window.draw(platform);
	}
	
private:

	Sprite platform;

};