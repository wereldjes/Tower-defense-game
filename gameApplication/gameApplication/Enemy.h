#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
using namespace sf;

class Enemy {
public:

	Enemy(float sizeX, float sizeY, float posX, float posY, float originX, float originY, Color color);

	void drawTo(RenderWindow &window);

	void move(Vector2f distance);

	int getY();

	int getX();

	bool isKilled();

	FloatRect getGlobalBoundsOfEnemy();

private:
	int enemyHitpoints;
	RectangleShape enemy;
};