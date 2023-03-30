#include <stdio.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <time.h>
#include "sdl_general.h"

int main() {
	srand(time(NULL));

	Init();

	float x=200, y=400, v, a;
	float currentTime;

	v = rand()%40+1;
	a = rand()%90+1;
	printf("v = %f\na = %f\n", v, a);
	
	

	//printf("x = %lf\ny = %lf\n", xCord, yCord);



	//x<200&&y<700
	SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
	SDL_RenderClear(ren);

	 {


			SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);


			SDL_FRect rect= {x, y, 10, 10};

			SDL_RenderFillRectF(ren, &rect);


		}

	SDL_RenderPresent(ren);	

	SDL_Delay(4000);

	DeInit();


}
