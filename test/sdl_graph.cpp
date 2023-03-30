#include <stdio.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <time.h>
#include "sdl_general.h"

float rand_float(float min, float max) {
	return ((max - min) * ((float)rand() / (float)RAND_MAX)) + min;
}

int main() {
	srand(time(NULL));

	Init();

	float x=0, y=800, v, a;
	float currentTime;

	v = rand_float(1, 15);
	a = rand_float(0.1, 1);
	printf("v = %f\na = %f\n", v, a);
	
	

	//printf("x = %lf\ny = %lf\n", xCord, yCord);



	//x<200&&y<700
	SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
	SDL_RenderClear(ren);

	for (double t = 0;currentTime<200; x+=v*cos(a)*t, y=abs(y-v*t*sin(a)+(10*t*t)/2), t+=0.016) {
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);


		SDL_FRect rect = {x, y, 10, 10};

		SDL_RenderFillRectF(ren, &rect);
		currentTime++;

	}

	SDL_RenderPresent(ren);	

	SDL_Delay(4000);

	DeInit();


}
