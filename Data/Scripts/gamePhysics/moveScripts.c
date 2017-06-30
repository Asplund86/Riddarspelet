//
// Created by emil on 6/28/17.
//

#include "moveScripts.h"
#include "../coreScripts/coreEvents.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include "../coreScripts/structs.h"

void moveKnight1(SDL_Window *window, GameState *game){
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if(game->gameInit.window){

        if(state[SDL_SCANCODE_RIGHT]){
            game->knight1.x += 10;
            game->knight1.facingLeft = 0;
        }

        if(state[SDL_SCANCODE_LEFT]){
            game->knight1.x -= 10;
            game->knight1.facingLeft = 1;

        }

        if(state[SDL_SCANCODE_UP]){
            game->knight1.y -= 10;
        }

        if(state[SDL_SCANCODE_DOWN]){
            game->knight1.y += 10;
        }
    }
}
