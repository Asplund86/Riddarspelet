//
// Created by emil on 6/28/17.
//

#include "coreEvents.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include "structs.h"

int closeGameEvent(SDL_Window *window){
    SDL_Event eventCloseGame;
    int done = 0;

    while(SDL_PollEvent(&eventCloseGame)){

        switch (eventCloseGame.type){

            case SDL_WINDOWEVENT_CLOSE:{
                if(window){
                    SDL_DestroyWindow(window);
                    window = NULL;
                    int done = 1;
                }
            }
                break;

            case SDL_KEYDOWN:{
                switch (eventCloseGame.key.keysym.sym){
                    case SDLK_ESCAPE:
                        done = 1;
                        break;
                }
                break;
            }
            case SDL_QUIT:
                done = 1;
                break;
        }
    }
    return done;
}
