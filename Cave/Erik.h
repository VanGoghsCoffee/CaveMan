#pragma once
#ifndef CAVE_ERIK_H
#define CAVE_ERIK_H

#include "Viking.h"

class CErik : public CViking
{
public:
    CErik(CDungeon* dungeon_, char symbol_);
    ~CErik(void);
    bool search();
    void move();
};

#endif /* CAVE_ERIK_H */