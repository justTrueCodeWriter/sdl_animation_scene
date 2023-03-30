#include <SDL2/SDL.h>
#include "sdl_general.h"
#include <stdio.h>
#include <time.h>
#include <math.h>

#define STAR_POINTS_COUNT 11

struct StarInTheBox {
	float x, y;
	float scale;
};

StarInTheBox s;

void star_in_box(float x, float y, int width, int height, SDL_Window* win, SDL_Renderer* ren) {

	float w = 80, h = 80;
	SDL_FPoint starPoints[STAR_POINTS_COUNT] = {{x, y+27}, {x+27, y+27}, {x+w/2, y}, {x+w-27, y+27}, {x+w, y+27}, {x+w/2+18, y+h/2+8}, {x+w-10, y+h}, {x+w/2, y+h/2+22}, {x+10, y+h}, {x+w/2-18, y+h/2+8}, {x, y+27}};

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

	float x=0, y=600, v, a;

	v = 10;//rand()%3+1;
	a = rand()/(1.0+0.01);
	printf("v = %f\na = %f\n", v, a);
	


	double xCord = v/cos(a);
	double yCord = v/sin(a);

	printf("x = %lf\ny = %lf\n", xCord, yCord);


	//x<200&&y<700
	for (int t = 0; t < 300; x+=xCord, y-=yCord, t++){
			SDL_SetRenderDrawColor(ren, 200, 200, 200, 255);
			SDL_RenderClear(ren);

			star_in_box(x, y-80, width, height, win, ren);	
			SDL_RenderPresent(ren);	
			SDL_Delay(16);
		}


	//SDL_Delay(6000);

}

int main() {

	srand(time(NULL));

	Init();
	flying_star(WIDTH, HEIGHT, win, ren);
	DeInit();

}
