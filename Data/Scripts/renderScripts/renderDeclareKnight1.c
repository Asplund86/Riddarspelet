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


    //Declaring surface and texture for walk1.
    char *surfacePath = {"Data/Images/knight1/walk1.png"};

    SDL_Surface *surface = IMG_Load(surfacePath);
    

    if(!surface){
        printf("Error loading %s: %s\n", surfacePath, SDL_GetError());
        //Shutdown
        SDL_DestroyRenderer(game->gameInit.renderer);
        SDL_DestroyWindow(game->gameInit.window);
        SDL_Quit();
        exit(1);
    }

    game->images.knightTexture.walk1 = SDL_CreateTextureFromSurface(game->gameInit.renderer, surface);
    SDL_FreeSurface(surface);

    if(!game->images.knightTexture.walk1){
        printf("Error loading texture for %s: %s\n", surfacePath, SDL_GetError());
        //Shutdown
        SDL_DestroyRenderer(game->gameInit.renderer);
        SDL_DestroyWindow(game->gameInit.window);
        SDL_Quit();
        exit(1);
    }

    //------------------------

}
