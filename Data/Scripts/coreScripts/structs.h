//
// Created by emil on 6/25/17.
//

#ifndef FIRSTGAME_STRUCTS_H
#define FIRSTGAME_STRUCTS_H

#include <SDL2/SDL.h>


typedef struct {
    int z;
    float x;
    float y;
    float yvel;
    short life;
    char *name;
    int facingLeft;
    int currentAnimationFrame;
    int jumping;
    float currentYpos;
    SDL_Event *moveEvent;

} Knight;

typedef struct {
    int x;
    int y;
    int widht;
    int height;
    int currentAnimationFrame;
    int facingLeft;
} Backgrounds;

typedef struct {
    SDL_Texture *walk[10];
    SDL_Texture *currentWalktexture;
} KnightTexture;

typedef struct {
    SDL_Texture *backgroundLevel1;
} BackgroundTextures;

typedef struct {
    BackgroundTextures backgroundTextures;
    KnightTexture knightTexture;

} Images;

typedef struct {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event *event;
    _Bool closeGame;
    int currentGameFrame;
    int currentAnimationFrame;
    float gravity;
} GameInit;


typedef struct {
    //Game initilazion
    GameInit gameInit;

    //Backgrounds
    Backgrounds backgroundLevel1;

    //Players
    Knight knight1;

    //Images
    Images images;

} GameState;

#endif //FIRSTGAME_STRUCTS_H
