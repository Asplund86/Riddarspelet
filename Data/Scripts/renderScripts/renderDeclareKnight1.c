//
// Created by emil on 6/25/17.
//
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "renderDeclareKnight1.h"
#include <stdio.h>
#include "../coreScripts/structs.h"



//Function for declaring all sprites for Knight1

void renderDeclareKnight1(GameState *game){


    //Declaring surface and texture for walkAnimation.
    char *surfacePath[10] = {"Data/Images/knight1/images/walk/Walk.png",
                             "Data/Images/knight1/images/walk/Walk (2).png",
                             "Data/Images/knight1/images/walk/Walk (3).png",
                             "Data/Images/knight1/images/walk/Walk (4).png",
                             "Data/Images/knight1/images/walk/Walk (5).png",
                             "Data/Images/knight1/images/walk/Walk (6).png",
                             "Data/Images/knight1/images/walk/Walk (7).png",
                             "Data/Images/knight1/images/walk/Walk (8).png",
                             "Data/Images/knight1/images/walk/Walk (9).png",
                             "Data/Images/knight1/images/walk/Walk (10).png"};

    for(int i = 0; i < 10; i++) {

        SDL_Surface *surface = IMG_Load(surfacePath[i]);


        if (!surface) {
            printf("Error loading %s: %s\n", surfacePath[i], SDL_GetError());
            //Shutdown
            SDL_DestroyRenderer(game->gameInit.renderer);
            SDL_DestroyWindow(game->gameInit.window);
            SDL_Quit();
            exit(1);
        }

        game->images.knightTexture.walk[i]= SDL_CreateTextureFromSurface(game->gameInit.renderer, surface);
        SDL_FreeSurface(surface);

        if (!game->images.knightTexture.walk[i]) {
            printf("Error loading texture for %s: %s\n", surfacePath[i], SDL_GetError());
            //Shutdown
            SDL_DestroyRenderer(game->gameInit.renderer);
            SDL_DestroyWindow(game->gameInit.window);
            SDL_Quit();
            exit(1);
        }
    }

    //------------------------

}
