#include "stdafx.h"
#include "LevelManager.h"
//create one big "value" holder for levels. this includes the const platform location
//and the waves of enemies that shall spawn in each level (1 entityPool has to be called for 1 wave of enemies
EntityPool levelOne;
Enemy enemySadness(25.f, 40.f, 0.f, 350.f, 12.5, 20.f, Color::Blue);
//enemySadness.collisionDetection(floor);
//enemySadness.move({SADNESS_SPEED, 0});
//enemySadness.enemyDrawChecker(window, enemySadness);

LevelManager::LevelManager() {
}


LevelManager::~LevelManager() {
}

std::vector<EntityPool> LevelManager::LevelOne(RenderWindow &window) {
	std::vector<EntityPool> bigBoyVector;
	bigBoyVector.insert(levelOne.createEnemyPool(enemySadness, 5));
	
	return bigBoyVector;
}
