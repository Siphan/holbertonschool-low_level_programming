#include <SDL2/SDL.h>

/**
 * main - initialize an SDL2 instance
 * @instance: the instance which is used to be rendered.
 * Description: Instantiate the GUI
 * Return: 1 indicates their was error in Instantiating window.
 */
int main(void)
{
  SDL_Window *window;
  SDL_Renderer *renderer;

  /* Initialize SDL */
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "Unable to intialize SDL: %s\n", SDL_GetError());
		return (1);
	}

  /* Create a new Window instance */
	window = SDL_CreateWindow("A-MAZE-ING \\o/",
    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1260, 720, 0);
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
	return (0);
}
