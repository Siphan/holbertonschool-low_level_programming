#include <SDL2/SDL.h>
#include <stdio.h>
#include "../inc/maze.h"

/**
 * main - initialize an SDL2 instance
 * @instance: the instance which is used to be rendered.
 * Description: Instantiate the GUI
 * Return: 1 indicates their was error in Instantiating window.
 */
int main(void)
{
	SDL_Instance instance;

	if (init_instance(&instance) != 0)
	{
		/* SDL_GetError returns the latest error produced by any SDL function */
		fprintf( stderr, "Unable to initialize SDL instance: %s\n", SDL_GetError() );
		return (1);
	}

	while (1)
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		draw_maze(instance);
		SDL_RenderPresent(instance.renderer);
	}

	return (0);
}
