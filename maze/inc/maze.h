#ifndef _MAZE_HEADERS_
#define _MAZE_HEADERS_

#include <SDL2/SDL.h>

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Surface *screenSurface;
} SDL_Instance;

/* Macros: */
#define WINDOW_TITLE "Maze"
#define WINDOW_WIDTH 1260
#define WINDOW_HEIGHT 720

/* Initialize a new instance of SDL */
int init_instance(SDL_Instance *);
/* Draw on window */
void draw_maze(SDL_Instance instance);

#endif
