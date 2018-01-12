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

//check if enemyObject has collision with platformObject. if it has collision, send true and adjust player speed according to the platform being hit
bool Platform::collisionDetection(Enemy enemy) {
	if (platform.getGlobalBounds().intersects(enemy.getGlobalBoundsOfEnemy())) {
		return true;
	} else {
		return false;
	}
	return true;
}