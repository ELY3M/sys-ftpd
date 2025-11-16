#include "util.h"
#include "led.h"
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "minIni.h"
#include <switch.h>

static PadState pad = {0};

bool isHidHandheld()
{
    return padIsHandheld(&pad);
}

void initPads()
{
    padInitializeAny(&pad);
}


const char* buttons[] = {
    "A",
    "B",
    "X",
    "Y",
    "LS",
    "RS",
    "L",
    "R",
    "ZL",
    "ZR",
    "PLUS",
    "MINUS",
    "DLEFT",
    "DUP",
    "DRIGHT",
    "DDOWN",
};

HidNpadButton GetKey(const char* text)
{
    for (u8 i = 0; i != sizearray(buttons); ++i)
    {
        if (strcmp(text, buttons[i]) == 0)
        {
            return BIT(i);
        }
    }
    return 0;
}

