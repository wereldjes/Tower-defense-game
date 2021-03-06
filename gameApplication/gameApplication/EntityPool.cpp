#include "stdafx.h"
#include "EntityPool.h"
#include "iostream"

//create an entity pool that is going to manage creating and destroying Enemy() objects (waves)
//Do so by creating an Array<>() to add the Enemy() objects to (since they are of the same type and thus should be of same size)
//http://gameprogrammingpatterns.com/object-pool.html

EntityPool::EntityPool() {
}

EntityPool::~EntityPool() {
}

std::vector<Enemy> EntityPool::createEnemyPool(Enemy enemy, int enemyCount) {

	std::vector<Enemy> tempPool(enemyCount);

	for (int i=0; i < enemyCount; i++) {
		tempPool.push_back(enemy);
	}
	enemyPool = tempPool;

	return enemyPool;
}