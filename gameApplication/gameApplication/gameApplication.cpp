#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemy.h"
#include "Platform.h"
#include "Player.h"
#include "FontManager.h"
#include "TowerButton.h"
#include "EntityPool.h"
#include "LevelManager.h"
using namespace sf;
using namespace std;

int main() {
	
		RenderWindow window(VideoMode(1024, 512), " Platform Tower Defense Game");
		window.setVerticalSyncEnabled(true);

		//Ze player
		Player player;

		//plaforms
		Platform floor(1024.f, 25.f, 0.f, 487.f, Color::Green);
		Platform castleFloor(100.f, 20.f, 923.f, 465.f, Color(179, 89, 0, 255));
		Platform castleRoof(75.f, 20.f, 936.f, 443.f, Color(179, 89, 0, 255));

		//Enemy types
		Enemy enemyAnger(20.f, 20.f, 0.f, 400.f, 10.f, 10.f, Color::Red);

		TowerButton Tbutton1(25.f, 445.f);
		TowerButton Tbutton2(100.f, 445.f);
		TowerButton Tbutton3(175.f, 445.f);

		FontManager textUser;

		//Enemy movementSpeed
		const float ANGER_SPEED = 3.f;
		const float SADNESS_SPEED = 1.5;

		while (window.isOpen()) {
			Event event;
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
			}

			//std::cout << lv.LevelOne(window);

			// Collision detection between objects and enemies
			enemyAnger.collisionDetection(floor);
			
			enemyAnger.move({ANGER_SPEED, 0});
			
			/*-------Draw functions-------*/
			window.clear(Color(66, 238, 244, 255));
			
			floor.drawTo(window);

			Tbutton1.drawTo(window);
			Tbutton1.onClick(window);
			Tbutton2.drawTo(window);
			Tbutton2.onClick(window);
			Tbutton3.drawTo(window);

			castleFloor.drawTo(window);
			castleRoof.drawTo(window);
			enemyAnger.enemyDrawChecker(window, enemyAnger);

			textUser.drawTo(textUser.setText("Player hitpoints: " + std::to_string(player.getHealth()), 10.f, 10.f), window);
			textUser.drawTo(textUser.setText("Player gold: " + std::to_string(player.getPlayerMoney()), 790.f, 10.f), window);
			
			window.display();
			/*----------------------------*/
		}

		return 0;
}