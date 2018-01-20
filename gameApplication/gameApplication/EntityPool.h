#pragma once
#include <SFML/Graphics.hpp>
#include "Enemy.h"
using namespace sf;

class EntityPool {
public:
	EntityPool();
	~EntityPool();

	std::vector<Enemy> createEnemyPool(Enemy enemy, int enemyCount);
private:
	std::vector<Enemy> enemyPool;
};

