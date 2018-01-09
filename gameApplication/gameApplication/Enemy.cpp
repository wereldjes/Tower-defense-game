#include "Enemy.h"

Enemy::Enemy(Texture texture, Color color, int enemyWorth) {
	enemy.setTexture(texture);
	enemy.setColor(color);
}

void Enemy::drawTo(RenderWindow &window) {
	window.draw(enemy);
}

void Enemy::move(Vector2f distance) {
	enemy.move(distance);
}

void Enemy::setPos(Vector2f newPos) {
	enemy.setPosition(newPos);
}

int Enemy::getY() {
	return enemy.getPosition().y;
}

int Enemy::enemyContainer(int setEnemyNumber, Enemy enemyType) {
	//create array container to hold multiple enemies
	//Enemy setEnemyContainer[setEnemyNumber] = {enemyType};
}

bool Enemy::isKilled() {
	if (enemyHitpoints == 0) {
		return true;
	}
}