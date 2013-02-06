#pragma once
#ifndef CAVE_ASTRID_H
#define CAVE_ASTRID_H

#include "Viking.h"

class CAstrid : public CViking
{
public:
    CAstrid(CDungeon* dungeon_, char symbol_);
    ~CAstrid(void);
    bool search();
    void move();
};

#endif /* CAVE_ASTRID_H */