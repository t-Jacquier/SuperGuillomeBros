//
// Created by timeojacquier on 17/01/2021.
//
#include <SDL2/SDL.h>

#ifndef GUILLOME_EVENT_H
#define GUILLOME_EVENT_H

typedef struct
{
    char key[256];
    int mousex,mousey;
    int mousexrel,mouseyrel;
    char mousebuttons[8];
    char quit;
} Input;

void UpdateEvents(Input* in);

#endif //GUILLOME_EVENT_H
