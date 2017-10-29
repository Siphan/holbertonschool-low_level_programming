#include <SDL2/SDL.h>
#include <stdio.h>
#include "../inc/maze.h"

/* Initialize a new instance of SDL
	Return 0 on success, 1 on fail
 */
int init_instance(SDL_Instance *instance)
{
	/* Initialize SDl */
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf( stderr, "Unable to initialize SDL: %s\n", SDL_GetError() );
		return (1);
	}

	/* Create a new SDL_Window instance */
	instance->window = SDL_CreateWindow(WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
	if (instance->window == NULL)
	{
		fprintf( stderr, "Unable to create window: %s\n", SDL_GetError() );
		SDL_Quit();
		return (1);
	}

	/* Create a new Renderer instance linked to the Window */
	instance->renderer = SDL_CreateRenderer(instance->window, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (instance->renderer == NULL)
	{
		SDL_DestroyWindow(instance->window);
		fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}

	/* Get window surface */
	instance->screenSurface = SDL_GetWindowSurface(instance->window);

	/* Fill the surface white */
	SDL_FillRect(instance->screenSurface, NULL, SDL_MapRGB(instance->screenSurface->format, 0xFF, 0xFF, 0xFF));

	/* Update the surface */
	SDL_UpdateWindowSurface(instance->window);

	/* Wait two seconds */
	SDL_Delay(2000);

	/* Destroy window to free its memory */
    SDL_DestroyWindow(instance->window);
    SDL_DestroyRenderer(instance->renderer);
    SDL_FreeSurface(instance->screenSurface);

	/* Quit SDL subsystems after everything is deallocated */
	SDL_Quit();

	return (0);
}
