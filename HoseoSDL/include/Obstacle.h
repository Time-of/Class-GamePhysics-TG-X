#pragma once

#include "Vector2D.h"
#include <SDL2/SDL.h>

class Obstacle
{
public:
	Obstacle(float x, float y, float r) : position(x, y), radius(r) {}

	void draw(SDL_Renderer* renderer)
	{
		aacircleRGBA(renderer, position.getX(), position.getY(), radius, 255, 255, 255, 255);
	}

	Vector2D position;
	float radius;
};