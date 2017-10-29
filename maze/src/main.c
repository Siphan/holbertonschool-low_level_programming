#include <SDL2/SDL.h>
#include <stdio.h>

/**
 * main - initialize an SDL2 instance
 * @instance: the instance which is used to be rendered.
 * Description: Instantiate the GUI
 * Return: 1 indicates their was error in Instantiating window.
 */
int main(void)
{
	/* The window we'll be rendering to */
	SDL_Window *window;
	SDL_Renderer *renderer;
	/* The surface contained by the window */
	SDL_Surface *screenSurface;

	/* Initialize SDL. Needed to call any SDL function. */
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		/* SDL_GetError returns the latest error produced by any SDL function */
		fprintf(stderr, "Unable to intialize SDL: %s\n", SDL_GetError());
		return (1);
	}

	/* Create a new Window instance */
	window = SDL_CreateWindow("A-MAZE-ING \\o/",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1260, 720, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	/* Create a new Renderer instance linked to the Window */
	renderer = SDL_CreateRenderer(window, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == NULL)
	{
		SDL_DestroyWindow(window);
		fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}

	/* Get window surface */
	screenSurface = SDL_GetWindowSurface(window);

	/* Fill the surface white */
	SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

	/* Update the surface */
	SDL_UpdateWindowSurface(window);

	/* Wait two seconds */
	SDL_Delay(5000);

	/* Destroy window to free its memory */
	SDL_DestroyWindow(window);

	/* Quit SDL subsystems after everything is deallocated */
	SDL_Quit();

	return (0);
}
