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

		//Texturing
		Texture floorTexture;
		Texture angryTexture;
		Texture sadTexture;
		
		if (!floorTexture.create(1024,30)) {
			//catch error
		}

		if (!angryTexture.create(20, 20)) {
			//catch error
		}

		if (!sadTexture.create(25, 40)) {
			//catch error
		}

		//Platform
		Platform floorSprite(floorTexture, Color::Green);
		floorSprite.setPos({0,482});

		//Enemy types
		Enemy enemyAnger(angryTexture,Color::Red, 5);
		enemyAnger.setPos({0,400});
		Enemy enemySadness(sadTexture,Color::Blue, 10);
		enemySadness.setPos({0,350});

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

			enemyAnger.move({ANGER_SPEED, 0});
			enemySadness.move({SADNESS_SPEED, 0});
			
			window.clear(Color::Black);
			/*-------Draw functions-------*/
			floorSprite.drawTo(window);

			enemyAnger.drawTo(window);
			enemySadness.drawTo(window);
			/*----------------------------*/
			window.display();
		}

		return 0;
}