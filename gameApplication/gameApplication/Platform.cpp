#include "Platform.h"

Platform::Platform() {

}

void Platform::setSize(Vector2f size) {
	platform.setSize(size);
}

void Platform::setPosition(Vector2f newPos) {
	platform.setPosition(newPos);
}

void Platform::drawTo(RenderWindow &window) {
	window.draw(platform);
}

void Platform::setFillColor(Color color) {
	platform.setFillColor(color);
}