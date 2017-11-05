#include "maze.h"

/**
 * close_SDL - Perform memory freeing tasks related to SDL before quitting
 * @instance: SDL instance
 */
void close_SDL(SDL_Instance *instance)
{
	SDL_DestroyRenderer(instance->renderer);
	SDL_DestroyWindow(instance->window);
	SDL_Quit();
}
