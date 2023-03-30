#define _CRT_SECURE_NO_WARNINGS
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/sdl_general.h"

int midnight_city_0_layer(int argc, char* argv[]) {
	bool isRunning = true;
	int flag = 0;
	int flag_2 = 0;
	int red = 184, green = 184;
	int red_2 = 0, green_2 = 0;
	SDL_Event ev;
	while (isRunning) {
		SDL_PollEvent(&ev);
		int shiftX = 250, shiftY = 300, Xsize = 150, Ysize = 300; //Дома
		int shiftX_2 = 250, shiftY_2 = 300, Xsize_2 = 14, Ysize_2 = 24;//Окна 1 дома(самого большого)
		int shiftX_3 = 450, shiftY_3 = 400, Xsize_3 = 14, Ysize_3 = 24;//Окна 2 дома
		int shiftX_4 = 600, shiftY_4 = 450, Xsize_4 = 14, Ysize_4 = 24;//Окна 3 дома
		int shiftX_5 = 750, shiftY_5 = 400, Xsize_5 = 14, Ysize_5 = 24;//Окна 4 дома
		int shiftX_6 = 100, shiftY_6 = 400, Xsize_6 = 14, Ysize_6 = 24;//Окна 5 дома
		int shiftX_7 = 485, shiftY_7 = 340, Xsize_7 = 14, Ysize_7 = 24;//Окна 6 дома
		int shiftX_8 = 800, shiftY_8 = 345, Xsize_8 = 14, Ysize_8 = 24;//Окна 7 дома

		switch (ev.type) {
		case SDL_QUIT:
			isRunning = false;
			break;
		}

		SDL_SetRenderDrawColor(ren, 1, 17, 59, 0);
		SDL_RenderClear(ren);
		SDL_Rect r = { shiftX, shiftY, Xsize, Ysize };
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 0);
		SDL_Rect r2 = { shiftX_2, shiftY_2, Xsize_2, Ysize_2 };

#pragma region Houses
		SDL_RenderFillRect(ren, &r);
		r = { shiftX + 200, shiftY + 100, Xsize - 50, Ysize - 100 };
		SDL_RenderFillRect(ren, &r);
		r = { shiftX + 350, shiftY + 150, Xsize - 50, Ysize - 150 };

		SDL_RenderFillRect(ren, &r);
		r = { shiftX + 500, shiftY + 100, Xsize - 50, Ysize - 100 };

		SDL_RenderFillRect(ren, &r);
		r = { shiftX - 150, shiftY + 100, Xsize - 50, Ysize - 100 };
		SDL_RenderFillRect(ren, &r);

		r = {shiftX + 235, shiftY + 50, Xsize - 50, Ysize - 50};
		SDL_RenderFillRect(ren, &r);

		r = { shiftX + 550, shiftY + 50, Xsize , Ysize - 50 };
		SDL_RenderFillRect(ren, &r);

#pragma endregion

		SDL_SetRenderDrawColor(ren, 184, 184, 4, 0);

#pragma region Home_1
		//1 ряд
		r2 = { shiftX_2 + 18, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 43, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		/*r2 = { shiftX_2 + 68, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 93, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 118, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		//2 ряд
		shiftX_2 = 250;
		/*r2 = { shiftX_2 + 18,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		r2 = { shiftX_2 + 43,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		/*r2 = { shiftX_2 + 68,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		r2 = { shiftX_2 + 93,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		/*r2 = { shiftX_2 + 118, shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		//3 ряд
		shiftX_2 = 250;
		/*r2 = { shiftX_2 + 18,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		r2 = { shiftX_2 + 43,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		/*r2 = { shiftX_2 + 68,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		r2 = { shiftX_2 + 93,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 118, shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		//4 ряд
		shiftX_2 = 250;
		r2 = { shiftX_2 + 18,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		/*r2 = { shiftX_2 + 43,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 68,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 93,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 118, shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		//5 ряд
		shiftX_2 = 250;
		/*r2 = { shiftX_2 + 18,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 43,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		r2 = { shiftX_2 + 68,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
		r2 = { shiftX_2 + 93,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
		/*r2 = { shiftX_2 + 118, shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);*/
#pragma endregion

#pragma region Home_2
//1 row
	//r = {shiftX_3  + 16, shiftY_3 + 30, Xsize_3, Ysize_3}; SDL_RenderFillRect(ren, &r);
	//r = { shiftX_3 + 43, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_3 + 70, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		//2 row
		shiftX_3 = 450;
		r = { shiftX_3 + 16, shiftY_3 + 80, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_3 + 43, shiftY_3 + 80, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_3 + 70, shiftY_3 + 80, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		//3 row
		shiftX_3 = 450;
		//r = { shiftX_3 + 16, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_3 + 43, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_3 + 70, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
#pragma endregion

#pragma region Home_3
//1 row
//r = { shiftX_4 + 16, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
//r = { shiftX_4 + 43, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
//r = { shiftX_4 + 70, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
//2 row
		shiftX_4 = 600;
		r = { shiftX_4 + 16, shiftY_4 + 80, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_4 + 43, shiftY_4 + 80, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_4 + 70, shiftY_4 + 80, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
#pragma endregion

#pragma region Home_4
//1 row
//r = { shiftX_5 + 16, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_5 + 43, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_5 + 70, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		//2 row
		shiftX_5 = 750;
		r = { shiftX_5 + 16, shiftY_5 + 80, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_5 + 43, shiftY_5 + 80, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_5 + 70, shiftY_5 + 80, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		//3 row
		shiftX_5 = 750;
		//r = { shiftX_5 + 16, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_5 + 43, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_5 + 70, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
#pragma endregion

#pragma region Home_5
//1 row
		r = { shiftX_6 + 16, shiftY_6 + 30, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_6 + 43, shiftY_6 + 30, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_6 + 70, shiftY_6 + 30, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		//2 row
		shiftX_6 = 100;
		//r = { shiftX_6 + 16, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_6 + 43, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_6 + 70, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		//3 row
		shiftX_6 = 100;
		r = { shiftX_6 + 16, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_6 + 43, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
		//r = { shiftX_6 + 70, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
#pragma endregion

#pragma region Home_6
		//1 row
		r = { shiftX_7 + 16, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_7 + 43, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_7 + 70, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
		//2 row
		r = { shiftX_7 + 70, shiftY_7 + 80, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
		//3 row
		r = { shiftX_7 + 70, shiftY_7 + 130, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
		//4 row
		r = { shiftX_7 + 70, shiftY_7 + 180, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
#pragma endregion

#pragma region Home_7
		//1 row
		r = { shiftX_8 + 16, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 43, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 70, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 97, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 124, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		//2 row
		r = { shiftX_8 + 43, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 70, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 97, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 124, shiftY_8+ 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		//3 row
		r = { shiftX_8 + 43, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 70, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 97, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 124, shiftY_8+ 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		//4 row
		r = { shiftX_8 + 43, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 70, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 97, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 124, shiftY_8+ 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		// 5 row
		r = { shiftX_8 + 43, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 70, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 97, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
		r = { shiftX_8 + 124, shiftY_8+ 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
#pragma endregion

		if (flag == 0) {
			SDL_SetRenderDrawColor(ren, red -= 2, green -= 2, 4, 0);
			r = { shiftX_8 + 16, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 16, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 43, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 70, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 130, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r2 = { shiftX_2 + 68, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 93, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 18,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 43,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 93,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 43,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r = { shiftX_3 + 16, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 16, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 43, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 16, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 16, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 70, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 16, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 43, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 16, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 70, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			if (red < 5)
				flag = 1;
		}

		if (flag == 1) {
			SDL_SetRenderDrawColor(ren, red += 2, green += 2, 4, 0);
			r = { shiftX_8 + 16, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 16, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 43, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 70, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 130, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r2 = { shiftX_2 + 68, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 93, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 18,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 43,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 93,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 43,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r = { shiftX_3 + 16, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 16, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 43, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 16, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 16, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 70, shiftY_5 + 30, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 16, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 43, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 16, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 70, shiftY_6 + 80, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			if (red > 179)
				flag = 0;
		}

		if (flag_2 == 0) {
			SDL_SetRenderDrawColor(ren, red_2 += 2, green_2 += 2, 4, 0);
			r = { shiftX_8 + 43, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 43, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 80, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 180, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r2 = { shiftX_2 + 118, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 18,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 18,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r = {shiftX_3  + 16, shiftY_3 + 30, Xsize_3, Ysize_3}; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 43, shiftY_3 + 80, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 70, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 16, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 43, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 70, shiftY_4 + 80, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 43, shiftY_5 + 80, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 70, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 43, shiftY_6 + 30, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 43, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 70, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			if (red_2 > 179)
				flag_2 = 1;
		}

		if (flag_2 == 1) {
			SDL_SetRenderDrawColor(ren, red_2 -= 2, green_2 -= 2, 4, 0);
			r = { shiftX_8 + 43, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 30, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 75, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 120, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 70, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 124, shiftY_8 + 165, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 43, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_8 + 97, shiftY_8 + 210, Xsize_8, Ysize_8 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 43, shiftY_7 + 30, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 80, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_7 + 70, shiftY_7 + 180, Xsize_7, Ysize_7 }; SDL_RenderFillRect(ren, &r);
			r2 = { shiftX_2 + 118, shiftY_2 + 30, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 80, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 18,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 130, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 68,  shiftY_2 + 180, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 18,  shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r2 = { shiftX_2 + 118, shiftY_2 + 230, Xsize_2, Ysize_2 }; SDL_RenderFillRect(ren, &r2);
			r = { shiftX_3 + 16, shiftY_3 + 30, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 43, shiftY_3 + 80, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_3 + 70, shiftY_3 + 130, Xsize_3, Ysize_3 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 16, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 43, shiftY_4 + 30, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_4 + 70, shiftY_4 + 80, Xsize_4, Ysize_4 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 43, shiftY_5 + 80, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_5 + 70, shiftY_5 + 130, Xsize_5, Ysize_5 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 43, shiftY_6 + 30, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 43, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			r = { shiftX_6 + 70, shiftY_6 + 130, Xsize_6, Ysize_6 }; SDL_RenderFillRect(ren, &r);
			if (red_2 < 5)
				flag_2 = 0;
		}

		SDL_Delay(16);
		SDL_RenderPresent(ren);
	}


	return 0;
}
