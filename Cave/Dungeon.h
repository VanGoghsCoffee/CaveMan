#pragma once
#ifndef CAVE_DUNGEON_H
#define CAVE_DUNGEON_H

#include "Pos2D.h"

class CDungeon
{
public:
    CDungeon(void);
    ~CDungeon(void);
    static const int sizeDungeonX = 8;
    static const int sizeDungeonY = 8;
    int getMaxY();
    int getMaxX();
    void setCell(CPos2D* pos_, char sign_);
    char getCell(int y_, int x_);

private:
    static char area[sizeDungeonX][sizeDungeonY];

    /*
    int data[4][5];
    int data[4 * 5];

    int v = data[2][1];
    int v = 2 * 5 + 1
    */
};

#endif /* CAVE_DUNGEON_H */