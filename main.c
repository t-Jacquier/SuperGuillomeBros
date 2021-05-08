#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "header.h"
#include "librairies/fonction_SDL.h"

/*typedef struct
{
    char key[SDL_NUM_SCANCODES];
} Input;*/

/*void UpdateEvents(Input* in)
{
  SDL_Event event;
  while(SDL_PollEvent(&event))
  {
    switch (event.type)
    {
      case SDL_KEYDOWN:
        in->key[event.key.keysym.sym]=1;
        break;
      case SDL_KEYUP:
        in->key[event.key.keysym.sym]=0;
        break;
      default:
        break;
    }
  }
}*/

int main() {
    SDL_Window *window;  // Déclaration de la fenêtre

    if (SDL_Init(SDL_INIT_VIDEO) < 0) // Initialisation de la SDL
    {
        printf("Erreur d’initialisation de la SDL: %s", SDL_GetError());
        SDL_Quit();
        return EXIT_FAILURE;
    }// Créer la fenêtre
    window = SDL_CreateWindow("Fenetre SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
                              SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
    if (window == NULL) // En cas d’erreur
    {
        printf("Erreur de la creation d’une fenetre: %s", SDL_GetError());
        SDL_Quit();
        return EXIT_FAILURE;

    }

    const Uint8 *clavier;
    bool quit = false;
    while (!quit) {


        SDL_PumpEvents();
        clavier = SDL_GetKeyboardState(NULL);
        if (clavier[SDL_SCANCODE_A]) {
            quit = true;
        }

        if (clavier[SDL_SCANCODE_0]) {
            printf("touche a enfoncée");
            fflush(stdout);
        }

        if (clavier[SDL_SCANCODE_0] && clavier[SDL_SCANCODE_1]){
            printf("babouche");
        }




      printf("i\n");

      SDL_Delay(20);
  }

  SDL_Quit();
  return 0;
}
