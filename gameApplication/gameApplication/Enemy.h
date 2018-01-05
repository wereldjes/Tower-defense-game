#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
using namespace sf;

class Enemy {
public:

	Enemy(Vector2f size, Color color, int enemyWorth) {
		enemy.setSize(size);
		enemy.setFillColor(color);
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

	bool isKilled() {
		if (enemyHitpoints == 0) {
			return true;
		}
	}

private:

	int enemyHitpoints;
	RectangleShape enemy;
};