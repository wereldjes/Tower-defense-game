#pragma once
#include "Enemy.h"
#include "EntityPool.h"

class LevelManager {
public:
	LevelManager();
	~LevelManager();

	std::vector<EntityPool> LevelOne(RenderWindow &window);

private:

	
};

