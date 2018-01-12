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
		Enemy enemyAnger(20.f, 20.f, 0.f, 400.f, 10.f, 10.f, Color::Red);
		Enemy enemySadness(25.f, 40.f, 0.f, 350.f, 12.5, 20.f, Color::Blue);

		//Gravity variables
		const float GROUND_HEIGHT = 475.f;
		const float GRAVITY_SPEED = 5.f;

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
			if (floor.collisionDetection(enemySadness)) {
				enemySadness.move({ 0,0 });
			} else {
				enemySadness.move({ 0, GRAVITY_SPEED });
			}

			if (floor.collisionDetection(enemyAnger)) {
				enemyAnger.move({ 0,0 });
			} else {
				enemyAnger.move({ 0, GRAVITY_SPEED });
			}
			
			enemyAnger.move({ANGER_SPEED, 0});
			enemySadness.move({SADNESS_SPEED, 0});
			
			/*-------Draw functions-------*/
			window.clear(Color(66, 238, 244,255));
			
			floor.drawTo(window);
			enemyAnger.drawTo(window);
			enemyAnger.drawTo(window);
			enemyAnger.drawTo(window);
			enemySadness.drawTo(window);
			
			window.display();
			/*----------------------------*/
		}

		return 0;
}