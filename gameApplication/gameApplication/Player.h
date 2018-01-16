#pragma once
#include "stdafx.h"
#include "Enemy.h"

class Player {
public:
	Player();

	int getPlayerMoney();

	int getPlayerHitpoints();

	void playerHitpoints(Enemy enemy);

	int getHealth();

private:
	
	int money = 100;
	int lives = 20;

};