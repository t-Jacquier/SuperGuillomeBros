//
// Created by timeojacquier on 17/01/2021.
//

#include "event.h"

void UpdateEvents(Input* in)
{
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_KEYDOWN:
                in->key[event.key.keysym.sym]=1;
                break;
            case SDL_KEYUP:
                in->key[event.key.keysym.sym]=0;
                break;
            case SDL_MOUSEMOTION:
                in->mousex=event.motion.x;
                in->mousey=event.motion.y;
                in->mousexrel=event.motion.xrel;
                in->mouseyrel=event.motion.yrel;
                break;
            case SDL_QUIT:
                in->quit = 1;
                break;
            default:
                break;
        }
    }
}