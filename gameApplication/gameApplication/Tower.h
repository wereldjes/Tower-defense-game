#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Tower {
public:
	Tower();
	Tower(float sizeX, float sizeY, Color color, int towerDamage);
	void drawTo(RenderWindow &window);
	~Tower();

private:
	int towerDamage;
	RectangleShape tower;
};