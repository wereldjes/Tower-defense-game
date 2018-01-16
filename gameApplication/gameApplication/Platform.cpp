#include "Platform.h"

Platform::Platform(float sizeX, float sizeY, float posX, float posY, Color color) {
	platform.setSize(Vector2f(sizeX, sizeY));
	platform.setPosition(Vector2f(posX, posY));
	platform.setFillColor(color);
	platform.setOutlineThickness(2);
	platform.setOutlineColor(Color::Black);
}

void Platform::drawTo(RenderWindow &window) {
	window.draw(platform);
}

FloatRect Platform::getGlobalBoundsOfPlatform() {
	return platform.getGlobalBounds();
}