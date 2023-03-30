#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

float rand_float(float min, float max) {
	return ((max - min) * ((float)rand() / (float)RAND_MAX)) + min;
}

void star_in_box(float x, float y, int width, int height, SDL_Window* win, SDL_Renderer* ren);

void flying_star_2_layer(int width, int height, SDL_Window* win, SDL_Renderer* ren);
