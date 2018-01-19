#include "stdafx.h"
#include "TowerButton.h"
#include <iostream>


TowerButton::TowerButton(float posX, float posY) {
	button.setSize(Vector2f(WIDTH, HEIGHT));
	button.setPosition(Vector2f(posX, posY));
	button.setFillColor(Color(214, 214, 194, 100));
	button.setOutlineColor(Color::Black);
	button.setOutlineThickness(2);
}

TowerButton::~TowerButton() {

}

RectangleShape TowerButton::towerPurchaseWindow() {
	towerWindow.setSize(Vector2f(TOWER_WINDOW_WIDTH, TOWER_WINDOW_HEIGHT));
	towerWindow.setPosition(Vector2f(button.getPosition().x - 15.f, button.getPosition().y - 40.f));

	return towerWindow;
}

void TowerButton::onClick(RenderWindow &window) {
	
	//berekening maken voor rectangle size. test hem daarna tegen mouse position
	if (Mouse::isButtonPressed(Mouse::Left) 
			&& button.getPosition().x <= Mouse::getPosition(window).x 
				&& button.getPosition().x + WIDTH >= Mouse::getPosition(window).x
					&& button.getPosition().y <= Mouse::getPosition(window).y
						&& button.getPosition().y + HEIGHT >= Mouse::getPosition(window).y) {
		window.draw(towerPurchaseWindow());
		/* check if tower menu is already open, if not create one if it does, close it
		if () {
			
		}
		*/
	}

}

void TowerButton::drawTo(RenderWindow &window){
	window.draw(button);
}