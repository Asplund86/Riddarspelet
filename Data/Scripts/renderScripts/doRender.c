//
// Created by emil on 6/25/17.
//

#include "doRender.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include "../coreScripts/structs.h"


void renderBackgroundlevel1(GameState *BgL1){

    int rect2Pos = BgL1->backgroundLevel1.x + BgL1->backgroundLevel1.widht;

    if(BgL1->backgroundLevel1.x > 1) {
        if (BgL1->backgroundLevel1.x > BgL1->backgroundLevel1.widht)
            BgL1->backgroundLevel1.x = 0;
        rect2Pos = BgL1->backgroundLevel1.x - BgL1->backgroundLevel1.widht;
    }

    if(BgL1->backgroundLevel1.x * -1 >= BgL1->backgroundLevel1.widht) {
        BgL1->backgroundLevel1.x = 0;
    }

    const SDL_Rect backgroundLevel1Rect = {BgL1->backgroundLevel1.x, BgL1->backgroundLevel1.y,
                                           BgL1->backgroundLevel1.widht, BgL1->backgroundLevel1.height};


    const SDL_Rect backgroundLevel1Rect2 = {rect2Pos, BgL1->backgroundLevel1.y,
                                           BgL1->backgroundLevel1.widht, BgL1->backgroundLevel1.height};

    SDL_RenderCopyEx(BgL1->gameInit.renderer, BgL1->images.backgroundTextures.backgroundLevel1, 0,
                     &backgroundLevel1Rect, 0, NULL, 0);
    SDL_RenderCopyEx(BgL1->gameInit.renderer, BgL1->images.backgroundTextures.backgroundLevel1, 0,
                     &backgroundLevel1Rect2, 0, NULL, 0);
}
