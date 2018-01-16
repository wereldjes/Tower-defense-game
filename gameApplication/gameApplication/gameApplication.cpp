#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemy.h"
#include "Platform.h"
#include "Player.h"
using namespace sf;
using namespace std;

int main() {
	
		RenderWindow window(VideoMode(1024, 512), " Platform Tower Defense Game");
		window.setVerticalSyncEnabled(true);

		//Ze player
		Player player();

		//plaforms
		Platform floor(1024.f, 25.f, 0.f, 487.f, Color::Green);
		Platform castleFloor(100.f, 20.f, 923.f, 465.f, Color::Magenta);
		Platform castleRoof(75.f, 20.f, 936.f, 443.f, Color::Magenta);

		//Enemy types
		Enemy enemyAnger(20.f, 20.f, 0.f, 400.f, 10.f, 10.f, Color::Red);
		Enemy enemySadness(25.f, 40.f, 0.f, 350.f, 12.5, 20.f, Color::Blue);

		//Enemy movementSpeed
		const float ANGER_SPEED = 3.f;
		const float SADNESS_SPEED = 1.5;

		while (window.isOpen()) {
			Event event;
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
			}

			// Collision detection between objects and enemies
			enemyAnger.collisionDetection(floor);
			enemySadness.collisionDetection(floor);
			
			
			enemyAnger.move({ANGER_SPEED, 0});
			enemySadness.move({SADNESS_SPEED, 0});
			
			/*-------Draw functions-------*/
			window.clear(Color(66, 238, 244, 255));
			
			floor.drawTo(window);
			castleFloor.drawTo(window);
			castleRoof.drawTo(window);
			enemyAnger.enemyDrawChecker(window, enemyAnger);
			enemySadness.enemyDrawChecker(window, enemySadness);
			
			window.display();
			/*----------------------------*/
		}

		return 0;
}