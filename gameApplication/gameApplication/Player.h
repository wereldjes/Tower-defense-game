#pragma once
#include "stdafx.h"
#include "Enemy.h"

class Player {
public:
	Player();

	int getPlayerMoney();

	int getPlayerHitpoints();

	void playerHitpoints(Enemy enemy);

private:
	
	int money = 0;
	int lives = 20;
};