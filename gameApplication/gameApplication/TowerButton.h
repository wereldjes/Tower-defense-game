#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include "Tower.h"
using namespace sf;

class TowerButton {
public:
	TowerButton(float posX, float posY);

	~TowerButton();

	void onClick(RenderWindow &window);

	void drawTo(RenderWindow &window);

	RectangleShape towerPurchaseWindow();

private:
	RectangleShape button;
	const float WIDTH = 30.f;
	const float HEIGHT = 40.f;

	RectangleShape towerWindow;
	const float TOWER_WINDOW_HEIGHT = 30.f;
	const float TOWER_WINDOW_WIDTH = 60.f;
};

