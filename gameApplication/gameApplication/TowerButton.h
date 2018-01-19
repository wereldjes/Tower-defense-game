#pragma once
#include "stdafx.h"
#include <SFML\Graphics.hpp>
using namespace sf;

class TowerButton {
public:
	TowerButton(float posX, float posY);

	~TowerButton();

	void onClick(RenderWindow &window);

	void drawTo(RenderWindow &window);

private:

	RectangleShape button;

	float width = 30.f;

	float height = 40.f;

};

