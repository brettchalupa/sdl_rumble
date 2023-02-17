#include <stdio.h>
#include <SDL2/SDL.h>


int main(void)
{
	SDL_Init(SDL_INIT_JOYSTICK);

	printf("testing rumble for connected controllers\n");

	SDL_GameControllerAddMappingsFromFile("gamecontrollerdb.txt");
	printf("joysticks: %i\n\n", SDL_NumJoysticks());

	for(int i=0; i < SDL_NumJoysticks(); i++ )
	{
		SDL_GameController* gGameController = SDL_GameControllerOpen( i );

		if (gGameController != NULL)
		{
			printf("controller %i: %s\n", i, SDL_GameControllerName( gGameController ));

			if (SDL_GameControllerHasRumble( gGameController ))
			{
				SDL_GameControllerRumble( gGameController, 0xFFFF * 3 / 4, 0xFFFF * 3 / 4, 500 );
				SDL_Delay(500);
				SDL_GameControllerRumble( gGameController, 0, 0, 0 );
				printf("rumbled!\n\n");
			}
			else
			{
				printf("rumble not supported\n\n");
			}
		}
		else
		{
			printf("no controller connected: %s\n", SDL_GetError() );
		}
	}

	printf("all done, bye!\n");
	SDL_Quit();
}

