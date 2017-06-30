#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "Data/Scripts/renderScripts/renderDeclareBackgrounds.h"
#include "Data/Scripts/renderScripts/renderDeclareKnight1.h"
#include "Data/Scripts/coreScripts/structs.h"
#include "Data/Scripts/coreScripts/coreEvents.h"
#include "Data/Scripts/gamePhysics/moveScripts.h"

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;


int main(){

    GameState gameState;

    //<editor-fold desc="SDL initializing">
    if(SDL_Init(SDL_INIT_EVERYTHING != 0)) {
        printf("Error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }
    else
        printf("Initializing SDL successful!\n");
    //</editor-fold>

    //<editor-fold desc="Create Window">
    gameState.gameInit.window = SDL_CreateWindow("FirstGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
                                          SCREEN_HEIGHT, 0);
   //Error message if there is an error.
   if(!gameState.gameInit.window){
     printf("Error opening window: %s\n", SDL_GetError());
     //Quit SDL after error before returning.
     SDL_Quit();
     return 1;
   }
    //</editor-fold>

    //<editor-fold desc="Create renderer">
    // Choose render flags.
    Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    //Create the pointer to renderer.
    gameState.gameInit.renderer = SDL_CreateRenderer(gameState.gameInit.window, -1, render_flags);

    //Error message for render error.
    if(!gameState.gameInit.renderer){
        printf("Error creating renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(gameState.gameInit.window);
        SDL_Quit();
        return 1;
    }
    //</editor-fold>

    //Declaring all the surfaces and textures.
    renderDeclareBackgrounds(&gameState);
    renderDeclareKnight1(&gameState);


    gameState.knight1.x = 10;
    gameState.knight1.y = 400;

    SDL_RenderClear(gameState.gameInit.renderer);




    int done = 0;

    //Execute the GAME!
    while(!done){
        done = closeGameEvent(gameState.gameInit.window);
        moveKnight1(gameState.gameInit.window, &gameState);
        const SDL_Rect knightRect = {gameState.knight1.x, gameState.knight1.y, 200, 200};
        SDL_RenderCopy(gameState.gameInit.renderer, gameState.images.backgroundTextures.backgroundLevel1, NULL, NULL);
        SDL_RenderCopyEx(gameState.gameInit.renderer, gameState.images.knightTexture.walk1, NULL, &knightRect, 0, NULL, gameState.knight1.facingLeft);
        SDL_RenderPresent(gameState.gameInit.renderer);

        //SDL delay time before closing window.
        SDL_Delay(1000/100);
    };







    //<editor-fold desc="Main shutdown">
    SDL_DestroyTexture(gameState.images.knightTexture.walk1);
    SDL_DestroyTexture(gameState.images.backgroundTextures.backgroundLevel1);
    SDL_DestroyRenderer(gameState.gameInit.renderer);
    SDL_DestroyWindow(gameState.gameInit.window);
    SDL_Quit();
    //</editor-fold>
}
