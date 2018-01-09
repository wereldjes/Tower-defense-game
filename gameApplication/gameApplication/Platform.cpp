#include "Platform.h"

Platform::Platform(Texture texture, Color color) {
	platform.setColor(color);
	platform.setTexture(texture);
}

void Platform::setPos(Vector2f newPos) {
	platform.setPosition(newPos);
}

void Platform::drawTo(RenderWindow &window) {
	window.draw(platform);
}

void Platform::collisionDetection() {
	/*if () {

	}*/
}
