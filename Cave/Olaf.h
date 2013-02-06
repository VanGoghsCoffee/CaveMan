#pragma once
#ifndef CAVE_OLAF_H
#define CAVE_OLAF_H

#include "Viking.h"

class COlaf : public CViking
{
public:
    COlaf(CDungeon* dungeon_, char symbol_);
    ~COlaf(void);
    bool search();
    void move();
};

#endif /* CAVE_OLAF_H */