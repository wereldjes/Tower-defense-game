#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
using namespace sf;

class Enemy {
public:

	Enemy(Texture texture, Color color, int enemyWorth) {
		enemy.setTexture(texture);
		enemy.setColor(color);
	}

	void drawTo(RenderWindow &window) {
		window.draw(enemy);
	}

	void move(Vector2f distance) {
		enemy.move(distance);
	}

	void setPos(Vector2f newPos) {
		enemy.setPosition(newPos);
	}

	int getY() {
		return enemy.getPosition().y;
	}

	int enemyContainer(int setEnemyNumber, Enemy enemyType) {
		//create array container to hold multiple enemies
		//Enemy setEnemyContainer[setEnemyNumber] = {enemyType};
	}

	bool isKilled() {
		if (enemyHitpoints == 0) {
			return true;
		}
	}

private:
	int enemyHitpoints;
	Sprite enemy;
};