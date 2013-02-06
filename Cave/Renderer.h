#pragma once
#ifndef CAVE_RENDERER_H
#define CAVE_RENDERER_H

#include "Dungeon.h"

class CRenderer
{
public:
    CRenderer(CDungeon* dungeon_);
    ~CRenderer(void);
    void render();

private:
    CDungeon* dungeon;
};

#endif /* CAVE_RENDERER_H */