#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SDL.h>
#define AMOUNT_POINTS 20
struct parabola
{
	float x = 0.f;
	float scale = 4.f;
	float inc = 0.13f;
};
struct A_B
{
	float a, b;
};
struct x0_y0
{
	int x0_0, y0_0;
	int x1_0, y1_0;
	int x2_0, y2_0;
};
A_B ArA_B[AMOUNT_POINTS] = { {0.5f, 3.f}, {0.5f, -3.f}, {0.55f, 1.f}, {0.55f, -1.f},
							{0.6f, -1.f}, {0.6f, 1.f}, {0.65f, -3.f}, {0.65f, 3.f},
							{0.7f, -4.5f}, {0.7f, 4.5f}, {0.75f, -6.f}, {0.75f, 6.f},
							{0.8f, -8.f}, {0.8f, 8.f}, {0.75f, -6.f}, {0.75f, 6.f},
							{0.65f, -4.5f}, {0.65f, 4.5f},{0.8f, -8.5f}, {0.8f, 8.5f} };

float y(float a, float b, float x);
void background(int width, int height, SDL_Window* win, SDL_Renderer* ren);
void firework(int width, int height, SDL_Window* win, SDL_Renderer* ren);
void randColorFirework(int& amount_shot, SDL_Color& color_firework0, SDL_Color& color_firework1,
										 SDL_Color& color_firework2);
void shotCoordinates(x0_y0 &shot_coordinates, int amount_shot);

void task2_1(int width, int height, SDL_Window* win, SDL_Renderer* ren)
{
	srand(time(NULL));
	firework(width, height, win, ren);
}


void firework(int width, int height, SDL_Window* win, SDL_Renderer* ren)
{
	parabola par;
	SDL_FRect rect;
	SDL_Color color_firework0;
	SDL_Color color_firework1;
	SDL_Color color_firework2;
	x0_y0 shot_coordinates;

	float w_rect = 8.f, h_rect = 8.f;
	color_firework0.a = color_firework1.a = color_firework2.a = 249;
	SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_BLEND);
	while (true)
	{
		int amount_shot;

		randColorFirework(amount_shot, color_firework0, color_firework1, color_firework2);
		shotCoordinates(shot_coordinates, amount_shot);

		for (int i = 0; i < 85; i++)
		{
			int x_inc = 5;
			for (int j = 0; j < AMOUNT_POINTS; j++)
			{
				if (j == 0)
					background(width, height, win, ren);

				SDL_SetRenderDrawColor(ren, color_firework0.r, color_firework0.g, color_firework0.b, color_firework0.a);
				rect = { shot_coordinates.x0_0 + par.x * par.scale - w_rect / 2,
						 shot_coordinates.y0_0 + y(ArA_B[j].a, ArA_B[j].b, par.x) * par.scale - h_rect / 2,
						 w_rect, h_rect };
				SDL_RenderFillRectF(ren, &rect);

				SDL_RenderDrawLineF(ren, shot_coordinates.x0_0 + par.x * par.scale,
										 shot_coordinates.y0_0 + y(ArA_B[j].a, ArA_B[j].b, par.x) * par.scale,
										 shot_coordinates.x0_0 + (par.x - par.inc * x_inc) * par.scale,
										 shot_coordinates.y0_0 + y(ArA_B[j].a, ArA_B[j].b, par.x - par.inc * x_inc)
										 * par.scale);

				if (amount_shot >= 2)
				{
					SDL_SetRenderDrawColor(ren, color_firework1.r, color_firework1.g, color_firework1.b,
												color_firework1.a);
					rect = { shot_coordinates.x1_0 + par.x * par.scale - w_rect / 2,
							 shot_coordinates.y1_0 + y(ArA_B[j].a, ArA_B[j].b, par.x) * par.scale - h_rect / 2,
							 w_rect, h_rect };
					SDL_RenderFillRectF(ren, &rect);

					SDL_RenderDrawLineF(ren, shot_coordinates.x1_0 + par.x * par.scale,
						shot_coordinates.y1_0 + y(ArA_B[j].a, ArA_B[j].b, par.x) * par.scale,
						shot_coordinates.x1_0 + (par.x - par.inc * x_inc) * par.scale,
						shot_coordinates.y1_0 + y(ArA_B[j].a, ArA_B[j].b, par.x - par.inc * x_inc) * par.scale);
				}
				if (amount_shot == 3)
				{
					SDL_SetRenderDrawColor(ren, color_firework2.r, color_firework2.g, color_firework2.b,
						color_firework2.a);
					rect = { shot_coordinates.x2_0 + par.x * par.scale - w_rect / 2,
							 shot_coordinates.y2_0 + y(ArA_B[j].a, ArA_B[j].b, par.x) * par.scale - h_rect / 2,
							 w_rect, h_rect };
					SDL_RenderFillRectF(ren, &rect);

					SDL_RenderDrawLineF(ren, shot_coordinates.x2_0 + par.x * par.scale,
						shot_coordinates.y2_0 + y(ArA_B[j].a, ArA_B[j].b, par.x) * par.scale,
						shot_coordinates.x2_0 + (par.x - par.inc * x_inc) * par.scale,
						shot_coordinates.y2_0 + y(ArA_B[j].a, ArA_B[j].b, par.x - par.inc * x_inc) * par.scale);
				}
				par.inc *= -1;
				par.x *= -1;
			}
			if (color_firework0.a != 0)
			{
				color_firework0.a -= 3;
				color_firework1.a -= 3;
				color_firework2.a -= 3;
			}
			SDL_RenderPresent(ren);
			SDL_Delay(16);
			SDL_RenderClear(ren);
			par.x += par.inc;
		}
		color_firework0.a = 249;
		color_firework1.a = 249;
		color_firework2.a = 249;
		par.x = 0.f;
	}
}
void shotCoordinates(x0_y0& shot_coordinates, int amount_shot)
{
	shot_coordinates.x0_0 = rand() % 901 + 50;
	shot_coordinates.y0_0 = rand() % 271 + 30;
	if (amount_shot >= 2)
	{
		shot_coordinates.x1_0 = rand() % 901 + 50;
		shot_coordinates.y1_0 = rand() % 271 + 30;
	}
	if (amount_shot == 3)
	{
		shot_coordinates.x2_0 = rand() % 901 + 50;
		shot_coordinates.y2_0 = rand() % 271 + 30;
	}
}
void randColorFirework(int& amount_shot, SDL_Color& color_firework0, SDL_Color& color_firework1,
										 SDL_Color& color_firework2)
{
	amount_shot = rand() % 3 + 1;

	color_firework0.r = rand() % 200 + 50;
	color_firework0.g = rand() % 200 + 50;
	color_firework0.b = rand() % 200 + 50;
	if (amount_shot >= 2)
	{
		color_firework1.r = rand() % 200 + 50;
		color_firework1.g = rand() % 200 + 50;
		color_firework1.b = rand() % 200 + 50;
	}
	if (amount_shot == 3)
	{
		color_firework2.r = rand() % 200 + 50;
		color_firework2.g = rand() % 200 + 50;
		color_firework2.b = rand() % 200 + 50;
	}
}
float y(float a, float b, float x)
{
	return a * x * x + b * x;
}
void background(int width, int height, SDL_Window* win, SDL_Renderer* ren)
{
	SDL_SetRenderDrawColor(ren, 1, 17, 59, 255);
	SDL_RenderClear(ren);
}


void task2_5(int width, int height, SDL_Window* win, SDL_Renderer* ren)
{

}