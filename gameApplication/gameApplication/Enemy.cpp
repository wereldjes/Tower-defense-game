#include "Enemy.h"

Enemy::Enemy(float sizeX, float sizeY, float posX, float posY, float originX, float originY, Color color) {
	enemy.setSize(Vector2f(sizeX, sizeY));
	enemy.setPosition(Vector2f(posX, posY));
	enemy.setFillColor(color);
	enemy.setOutlineColor(Color::Black);
	enemy.setOutlineThickness(2);
	enemy.setOrigin(Vector2f(originX, originY));
}

void Enemy::drawTo(RenderWindow &window) {
	window.draw(enemy);
}

void Enemy::move(Vector2f distance) {
	enemy.move(distance);
}

int Enemy::getY() {
	return enemy.getPosition().y;
}

FloatRect Enemy::getGlobalBoundsOfEnemy() {
	return enemy.getGlobalBounds();
}

bool Enemy::isKilled() {
	if (enemyHitpoints <= 0) {
		return true;
	} else {
		return false;
	}
}