//
// Created by emil on 6/28/17.
//

#include "coreEvents.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include "structs.h"


void processEvents(SDL_Window *window, GameState *game) {
  SDL_Event event;
  game->gameInit.closeGame = 0;

while(SDL_PollEvent(&event))
{
  switch(event.type)
  {
    case SDL_WINDOWEVENT_CLOSE:
    {
      if(window)
      {
        SDL_DestroyWindow(window);
        window = NULL;
        game->gameInit.closeGame = 1;
      }
    }
    break;
    case SDL_KEYDOWN:
    {
      switch(event.key.keysym.sym)
      {
        case SDLK_ESCAPE:
        game->gameInit.closeGame = 1;
        break;

        case SDLK_SPACE:
          if(game->knight1.jumping == 2){
            game->knight1.jumping = 1;
            game->knight1.currentYpos = game->knight1.y;
          }
        break;
      }
    }
    break;
    case SDL_QUIT:
      //quit out of the game
      game->gameInit.closeGame = 1;
    break;
  }
}
}
