#include "main.h"
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "Data/Scripts/renderScripts/doRender.h"
#include "Data/Scripts/renderScripts/renderDeclareBackgrounds.h"
#include "Data/Scripts/renderScripts/renderDeclareKnight1.h"
#include "Data/Scripts/coreScripts/structs.h"
#include "Data/Scripts/coreScripts/coreEvents.h"
#include "Data/Scripts/gamePhysics/moveScripts.h"
#include "Data/Scripts/animationScripts/knightAnimation.h"

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768


int main() {

    GameState gameState;

    //<editor-fold desc="SDL initializing">
    if (SDL_Init(SDL_INIT_EVERYTHING != 0)) {
        printf("Error initializing SDL: %s\n", SDL_GetError());
        return 1;
    } else
        printf("Initializing SDL successful!\n");
    //</editor-fold>

    //<editor-fold desc="Create Window">
    gameState.gameInit.window = SDL_CreateWindow("FirstGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                                 SCREEN_WIDTH,
                                                 SCREEN_HEIGHT, 0);
    //Error message if there is an error.
    if (!gameState.gameInit.window) {
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
    if (!gameState.gameInit.renderer) {
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
    gameState.knight1.jumping = 2;
    gameState.knight1.yvel = -150;
    gameState.knight1.currentYpos = gameState.knight1.y;

    int done = 0;

    gameState.gameInit.currentGameFrame = 0;
    gameState.images.knightTexture.currentWalktexture = gameState.images.knightTexture.walk[0];
    gameState.backgroundLevel1.height = 768;
    gameState.backgroundLevel1.widht = 1024;
    gameState.backgroundLevel1.x = 0;
    gameState.backgroundLevel1.y = 0;
    gameState.gameInit.gravity = 22;




    //Execute the GAME!
    while (!gameState.gameInit.closeGame) {

        SDL_RenderClear(gameState.gameInit.renderer);
        processEvents(gameState.gameInit.window, &gameState);

        moveKnight1walk(gameState.gameInit.window, &gameState);
        knightCurrentYposition(&gameState);
        jumpAction(&gameState);
        gravityKicksIn(&gameState);

        printf("Y %f\n", gameState.knight1.y);
        printf("current Y %f\n", gameState.knight1.currentYpos);
        printf("Jumping %d\n", gameState.knight1.jumping);

        const SDL_Rect knightRect = {gameState.knight1.x, gameState.knight1.y, 200, 200};

        moveBackgroundLevel1(gameState.gameInit.window, &gameState);
        renderBackgroundlevel1(&gameState);

        knightAnimation(&gameState);
        SDL_RenderCopyEx(gameState.gameInit.renderer, gameState.images.knightTexture.walk[gameState.knight1.currentAnimationFrame],
                         NULL, &knightRect, 0, NULL, gameState.knight1.facingLeft);
        SDL_RenderPresent(gameState.gameInit.renderer);

        //printf("%d\n", gameState.knight1.yvel);

        //Set FPS and FrameCount.
        moveGamePos(&gameState);

        SDL_Delay(1000/30);

    }







    //<editor-fold desc="Main shutdown">
    SDL_DestroyTexture(gameState.images.knightTexture.currentWalktexture);
    SDL_DestroyTexture(gameState.images.backgroundTextures.backgroundLevel1);
    SDL_DestroyRenderer(gameState.gameInit.renderer);
    SDL_DestroyWindow(gameState.gameInit.window);
    SDL_Quit();
    //</editor-fold>

}
