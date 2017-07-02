//
// Created by emil on 6/28/17.
//

#ifndef FIRSTGAME_MOVESCRIPTS_H
#define FIRSTGAME_MOVESCRIPTS_H

#include "../../../main.h"
//#include "moveScripts.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include "../coreScripts/structs.h"

void knightCurrentYposition(GameState *cYp);
void gravityKicksIn(GameState *gravity);
void jumpAction(GameState *jump);
void moveKnight1jump(GameState *jump);
void moveGamePos(GameState *gamePos);
void moveKnight1walk(SDL_Window *window, GameState *game);
void moveBackgroundLevel1(SDL_Window *window, GameState *back);


#endif //FIRSTGAME_MOVESCRIPTS_H
