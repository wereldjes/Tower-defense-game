#include "stdafx.h"
#include "Tower.h"


Tower::Tower(float sizeX, float sizeY, Color color, int towerDamage) {
	tower.setSize(Vector2f(sizeX, sizeY));
	tower.setFillColor(color);
	//tower.setTowerDamage(towerDamage);
}

void Tower::drawTo(RenderWindow &window) {
	window.draw(tower);
}

Tower::~Tower() {
}
