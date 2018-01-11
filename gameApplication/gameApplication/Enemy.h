#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
using namespace sf;

class Enemy {
public:

	Enemy(float sizeX, float sizeY, float posX, float posY, Color color);

	void getGlobalBounds(Enemy enemy);

	void drawTo(RenderWindow &window);

	void move(Vector2f distance);

	int getY();

	int enemyContainer(int setEnemyNumber, Enemy enemyType);

	bool isKilled();

private:
	int enemyHitpoints;
	RectangleShape enemy;
};