#pragma once
#include "stdafx.h"
#include "Enemy.h"
#include <iostream>

class Player {
public:
	Player();

	int getPlayerMoney();

	int getHealth();

	void setPlayerHealth(int lives);

private:
	
	int money = 100;
	int lives = 20;

};