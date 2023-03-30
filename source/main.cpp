#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <time.h>

#include "include/sdl_general.h"
#include "include/flying_star.h" 

int main() {
	srand(time(NULL));
	bool isRunning = true;

	SDL_Event ev;

	Init();
	while (isRunning) {

		SDL_PollEvent(&ev);

		switch (ev.type) {
		case SDL_QUIT:
			isRunning = false;
			break;
		}

		flying_star_2_layer(WIDTH, HEIGHT, win, ren);	
	}


	DeInit();

}
