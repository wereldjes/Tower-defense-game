#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class MapGenerator : public Drawable {
public:


private:
	
	virtual void draw(RenderTarget& target, RenderStates states) const {

		target.draw(m_vertices, states);

	}

	VertexArray m_vertices;
};


