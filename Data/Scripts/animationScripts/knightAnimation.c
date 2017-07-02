//
// Created by emil on 6/30/17.
//

#include "knightAnimation.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include "../coreScripts/structs.h"




void knightAnimation(GameState *game) {

    int i = 1;
    if(game->knight1.currentAnimationFrame >= 10)
        game->knight1.currentAnimationFrame = 0;

    if(game->gameInit.window) {
        const Uint8 *state = SDL_GetKeyboardState(NULL);


        // WALK ANIMATION.

            if (state[SDL_SCANCODE_RIGHT]) {
                game->knight1.currentAnimationFrame += 1;
                i = 0;

            }

            if (state[SDL_SCANCODE_LEFT]) {
                game->knight1.currentAnimationFrame += 1;
                i = 0;

            }

            if (state[SDL_SCANCODE_UP]) {
                game->knight1.currentAnimationFrame += 1;
                i = 0;

            }

            if (state[SDL_SCANCODE_DOWN]) {
                game->knight1.currentAnimationFrame += 1;
                i = 0;

            }
    }

    if(i == 1){
        game->knight1.currentAnimationFrame = 0;
    }

    if(game->knight1.currentAnimationFrame == 11)
        game->knight1.currentAnimationFrame = 10;




}

