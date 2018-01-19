#include "stdafx.h"
#include "TowerButton.h"
#include <iostream>


TowerButton::TowerButton(float posX, float posY) {
	button.setSize(Vector2f(width, height));
	button.setPosition(Vector2f(posX, posY));
	button.setFillColor(Color(214, 214, 194, 100));
	button.setOutlineColor(Color::Black);
	button.setOutlineThickness(2);
}

TowerButton::~TowerButton() {

}

void TowerButton::onClick(RenderWindow &window) {
	
	//berekening maken voor rectangle size. test hem daarna tegen mouse position
	if (Mouse::isButtonPressed(Mouse::Left) 
			&& button.getPosition().x <= Mouse::getPosition(window).x 
				&& button.getPosition().x + width >= Mouse::getPosition(window).x
					&& button.getPosition().y <= Mouse::getPosition(window).y
						&& button.getPosition().y + height >= Mouse::getPosition(window).y) {
		std::cout << "button clicked!";
	}

}

void TowerButton::drawTo(RenderWindow &window){
	window.draw(button);
}