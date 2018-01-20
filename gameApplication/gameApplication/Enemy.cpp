#include "Enemy.h"

Enemy::Enemy() {

}

Enemy::Enemy(float sizeX, float sizeY, float posX, float posY, float originX, float originY, Color color) {
	enemy.setSize(Vector2f(sizeX, sizeY));
	enemy.setPosition(Vector2f(posX, posY));
	enemy.setFillColor(color);
	enemy.setOutlineColor(Color::Black);
	enemy.setOutlineThickness(2);
	enemy.setOrigin(Vector2f(originX, originY));
}

//Check if enemy should be drawn on screen.
//Param &window takes a window to draw on
//Param enemyEntity takes an Enemy to check if it should be drawn
void Enemy::enemyDrawChecker(RenderWindow &window, Enemy enemyEntity) {

	if (!enemyEntity.isKilled()) {
		window.draw(enemy);
	} else if (enemyEntity.getX() < 974) {
		window.draw(enemy);
	} else {
		//std::cout << "health -1";
	}
}

//Movement of enemy x and y
void Enemy::move(Vector2f distance) {
	enemy.move(distance);
}

int Enemy::getY() {
	return enemy.getPosition().y;
}

int Enemy::getX() {
	return enemy.getPosition().x;
}

bool Enemy::isKilled() {
	if (enemyHitpoints <= 0) {
		return true;
	} else {
		return false;
	}
}

//check if entity Enemy is making collision with a platform
void Enemy::collisionDetection(Platform platformEntity) {
	if (enemy.getGlobalBounds().intersects(platformEntity.getGlobalBoundsOfPlatform())) {
		enemy.move({ 0,0 });
	} else {
		enemy.move({ 0, gravity_speed });
	}
}