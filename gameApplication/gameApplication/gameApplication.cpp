// gameApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Enemy.h"
#include "Platform.h"
using namespace sf;
using namespace std;

int main() {
	
		RenderWindow window(VideoMode(1024, 512), " Platform Tower Defense Game");
		window.setVerticalSyncEnabled(true);

		//plaforms
		Platform floor(1024.f, 25.f, 0.f, 487.f, Color::Green);

		//Enemy types
		Enemy enemyAnger(20.f, 20.f, 0.f, 400.f, Color::Red);
		Enemy enemySadness(25.f, 40.f, 0.f, 350.f, Color::Blue);

		//Gravity variables
		const int GROUND_HEIGHT = 475;
		const float GRAVITY_SPEED = 5.0;

		//Enemy movementSpeed
		const float ANGER_SPEED = 3.0;
		const float SADNESS_SPEED = 1.5;

		while (window.isOpen()) {
			Event event;
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
			}

			if (enemyAnger.getY() < GROUND_HEIGHT) {
				enemyAnger.move({0, GRAVITY_SPEED});
			}
			
			if (enemySadness.getY() < GROUND_HEIGHT) {
				enemySadness.move({ 0, GRAVITY_SPEED });
			}

			// Collision detection between objects and enemies
			floor.collisionDetection(enemyAnger);
			floor.collisionDetection(enemySadness);
			
			enemyAnger.move({ANGER_SPEED, 0});
			enemySadness.move({SADNESS_SPEED, 0});
			
			window.clear(Color::Black);
			/*-------Draw functions-------*/
			floor.drawTo(window);

			enemyAnger.drawTo(window);
			enemySadness.drawTo(window);
			/*----------------------------*/
			window.display();
		}

		return 0;
}