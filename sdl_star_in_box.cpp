#include <SDL2/SDL.h>
#include "sdl_general.h"
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "flying_star.h"

#define STAR_POINTS_COUNT 11

struct StarInTheBox {
	float x, y;
};

StarInTheBox s;

void star_in_box(float x, float y, int width, int height, SDL_Window* win, SDL_Renderer* ren) {

	float w = 40, h = 40;
	SDL_FPoint starPoints[STAR_POINTS_COUNT] = {{x, y+13}, {x+13, y+13}, {x+w/2, y}, {x+w-13, y+13}, {x+w, y+13}, {x+w/2+9, y+h/2+4}, {x+w-5, y+h}, {x+w/2, y+h/2+11}, {x+9, y+h}, {x+w/2-9, y+h/2+4}, {x, y+13}};

	//SDL_FPoint starPoints[STAR_POINTS_COUNT] = {{}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}};
	SDL_FRect rect = {x, y, w, h};

	SDL_SetRenderDrawColor(ren, 0, 0, 0, 0);

	SDL_RenderFillRectF(ren, &rect);

	SDL_SetRenderDrawColor(ren, 255, 255, 50, 0);

	for (float scale = 20; scale >= 3; scale-=0.5) {
	for (int i = 0; i < STAR_POINTS_COUNT-1; i++)	{
		SDL_RenderDrawLineF(ren, starPoints[i].x, starPoints[i].y, starPoints[i+1].x, starPoints[i+1].y);
		}
	}	


	SDL_RenderPresent(ren);

}

void flying_star(int width, int height, SDL_Window* win, SDL_Renderer* ren) {

	float x=0, y=600, v, a, currentTime;

	v = rand_float(1, 15);
	a = rand_float(0.1, 1.0);
	printf("v = %f\na = %f\n", v, a);
	
	for (double t = 0;((int)x<1040)&&((int)y<645); x+=v*cos(a)*t, y=abs(y-v*t*sin(a)+(10*t*t)/2), t+=0.016){
			printf("x = %.3lf, y  = %.3lf\n", x, y);
			SDL_SetRenderDrawColor(ren, 200, 200, 200, 255);
			SDL_RenderClear(ren);

			star_in_box(x, y-40, width, height, win, ren);	
			SDL_RenderPresent(ren);	
			SDL_Delay(16);
		}


	//SDL_Delay(6000);

}

int main() {

	srand(time(NULL));

	Init();
	int c = 0;
	while (c < 10){
		printf("Step %d\n", c);
		flying_star(WIDTH, HEIGHT, win, ren);
		c++;
	}
	DeInit();

}
