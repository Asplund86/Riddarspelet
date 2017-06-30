//
// Created by emil on 6/25/17.
//

#ifndef FIRSTGAME_STRUCTS_H
#define FIRSTGAME_STRUCTS_H

#include <SDL2/SDL.h>


typedef struct {
    int z;
    int x;
    int y;
    short life;
    char *name;
    int facingLeft;
} Knight;

typedef struct {
    SDL_Texture *walk1;
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
} GameInit;


typedef struct {
    //Game initilazion
    GameInit gameInit;

    //Players
    Knight knight1;

    //Images
    Images images;

} GameState;

#endif //FIRSTGAME_STRUCTS_H
