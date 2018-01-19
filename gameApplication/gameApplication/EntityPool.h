#pragma once
#include <SFML/Graphics.hpp>
#include "Enemy.h"
using namespace sf;

class EntityPool {
public:
	EntityPool();
	~EntityPool();

	void createEnemyPool(Enemy enemy, int enemyCount);

	Enemy* getEnemyPool();
private:
	Enemy enemyPool[20];
};

