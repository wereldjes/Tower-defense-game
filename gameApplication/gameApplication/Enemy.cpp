#include "Enemy.h"

Enemy::Enemy(float sizeX, float sizeY, float posX, float posY, Color color) {
	enemy.setSize(Vector2f(sizeX, sizeY));
	enemy.setPosition(Vector2f(posX, posY));
	enemy.setFillColor(color);
	enemy.setOutlineColor(Color::Black);
	enemy.setOutlineThickness(2);
}

void Enemy::getGlobalBounds(Enemy enemy) {
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

int Enemy::enemyContainer(int setEnemyNumber, Enemy enemyType) {
	//create array container to hold multiple enemies
	//Enemy setEnemyContainer[setEnemyNumber] = {enemyType};
	return NULL;
}

bool Enemy::isKilled() {
	if (enemyHitpoints <= 0) {
		return true;
	} else {
		return false;
	}
}