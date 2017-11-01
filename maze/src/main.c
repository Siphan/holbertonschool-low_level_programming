#include <SDL2/SDL.h>
#include <stdio.h>
#include "../inc/maze.h"

/**
 * main - initialize an SDL2 instance
 * Description: Instantiate the GUI
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	//The window we'll be rendering to
	SDL_Window* window = NULL;
	
	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;
	
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );

		return (1);
	}
	
	else
	{
		//Create window
		window = SDL_CreateWindow( "Amazed", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( window == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );

			return (1);
		}
		else
		{
			//Get window surface
			screenSurface = SDL_GetWindowSurface( window );

			//Fill the surface white
			SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
			
			//Update the surface
			SDL_UpdateWindowSurface( window );

			//Wait two seconds
			SDL_Delay( 3000 );
		}
	}

	return (0);
}
