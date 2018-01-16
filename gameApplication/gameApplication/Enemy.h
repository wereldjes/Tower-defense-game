#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include "Platform.h"
using namespace sf;

class Enemy {
public:

	Enemy(float sizeX, float sizeY, float posX, float posY, float originX, float originY, Color color);

	void enemyDrawChecker(RenderWindow &window,Enemy enemyEntity);

	void move(Vector2f distance);

	int getY();

	int getX();

	bool isKilled();

	void collisionDetection(Platform platformEntity);

private:

	const float GRAVITY_SPEED = 5.f;
	
	int enemyHitpoints;

	RectangleShape enemy;
};