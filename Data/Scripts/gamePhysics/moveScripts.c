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


void moveGamePos(GameState *gamePos){
    if(gamePos->knight1.x >= 400 && gamePos->knight1.currentAnimationFrame > 0)
        gamePos->gameInit.currentGameFrame++;
    if(gamePos->knight1.x <= 0 && gamePos->gameInit.currentGameFrame > 0 && gamePos->knight1.currentAnimationFrame > 0)
        gamePos->gameInit.currentGameFrame--;
}


void moveKnight1walk(SDL_Window *window, GameState *game){

  // while(SDL_PollEvent(game->knight1.moveEvent)){
  //   switch (game->knight1.moveEvent->type) {
  //     case SDL_KEYDOWN:{
  //       switch (game->knight1.moveEvent->key.keysym.sym) {
  //         case SDLK_SPACE:{
  //           game->knight1.jumping = 1;
  //         }
  //       }
  //     }
  //   }
  // }

    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if(game->gameInit.window){

        if(state[SDL_SCANCODE_RIGHT] && game->knight1.x < 400){
            game->knight1.x += 5;
            game->knight1.facingLeft = 0;
        }

        if(state[SDL_SCANCODE_LEFT] && game->knight1.x > 0){
            game->knight1.x -= 5;
            game->knight1.facingLeft = 1;

        }

        if(state[SDL_SCANCODE_UP] && game->knight1.y > 360){
            game->knight1.y -= 5;
        }

        if(state[SDL_SCANCODE_DOWN] && game->knight1.y < 500){
            game->knight1.y += 5;
        }

        if(state[SDL_SCANCODE_SPACE]) {

        }
    }
}

void gravityKicksIn(GameState *gravity){

        if(gravity->knight1.jumping == 3 && gravity->knight1.y < gravity->knight1.currentYpos)
            gravity->knight1.y += gravity->gameInit.gravity;

        if(gravity->knight1.y >= gravity->knight1.currentYpos)
            gravity->knight1.jumping = 2;

}

void knightCurrentYposition(GameState *cYp){

}

void jumpAction(GameState *jump){
    if(jump->knight1.jumping == 1) {
        jump->knight1.y -= 15;
        if(jump->knight1.y <= jump->knight1.currentYpos + jump->knight1.yvel)
          jump->knight1.jumping = 3;
        }

    }


/*void moveKnight1jump(GameState *jump) {

    float currentYpos = jump->knight1.y;
    switch (jump->knight1.jumping->type){
        case SDL_KEYDOWN:{
            switch (jump->knight1.jumping->key.keysym.sym){
                case SDLK_SPACE:{

                }

                    }
                        break;
                }
            }
}*/



void moveBackgroundLevel1(SDL_Window *window, GameState *back) {
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if(back->gameInit.window){

        if(state[SDL_SCANCODE_RIGHT] && back->knight1.x >=400 && back->knight1.currentAnimationFrame > 0){
            back->backgroundLevel1.x -= 5;
            back->backgroundLevel1.facingLeft = 0;

        }

        if(state[SDL_SCANCODE_LEFT] && back->knight1.x <= 3 && back->gameInit.currentGameFrame > 0 && back->knight1.currentAnimationFrame > 0){
            back->backgroundLevel1.x += 5;
            back->backgroundLevel1.facingLeft = 0;

        }
    }
}
