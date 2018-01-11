#pragma once
#include <iostream>
#include "stdafx.h"
#include <SFML\Graphics.hpp>
using namespace sf;

class Enemy {
public:

	Enemy(Texture texture, Color color, int enemyWorth);

	void drawTo(RenderWindow &window);

	void move(Vector2f distance);

	void setPos(Vector2f newPos);

	int getY();

	int enemyContainer(int setEnemyNumber, Enemy enemyType);

	bool isKilled();

private:
	int enemyHitpoints;
	Sprite enemy;

};