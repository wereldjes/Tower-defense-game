#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "mapGenerator.h"
using namespace sf;

void mapGenerator() {
	VertexArray Water(Quads, 4);
	VertexArray Grass(Quads, 4);

	
	
	//Tile sets for background
	Grass[0].position = Vector2f(0, 0);
	Grass[1].position = Vector2f(100, 0);
	Grass[2].position = Vector2f(100, 100);
	Grass[3].position = Vector2f(0, 100);

	Grass[0].color = Color::Green;
	Grass[1].color = Color::Green;
	Grass[2].color = Color::Green;
	Grass[3].color = Color::Green;

	Grass[0].texCoords = sf::Vector2f(0, 0);
	Grass[1].texCoords = sf::Vector2f(25, 0);
	Grass[2].texCoords = sf::Vector2f(25, 50);
	Grass[3].texCoords = sf::Vector2f(0, 50); 

	Water[0].position = Vector2f(100, 100);
	Water[1].position = Vector2f(200, 100);
	Water[2].position = Vector2f(200, 200);
	Water[3].position = Vector2f(100, 200);

	Water[0].color = Color::Blue;
	Water[1].color = Color::Blue;
	Water[2].color = Color::Blue;
	Water[3].color = Color::Blue;

}