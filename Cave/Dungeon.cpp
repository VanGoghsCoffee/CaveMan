#include "Dungeon.h"

char CDungeon::area[sizeDungeonX][sizeDungeonY] =
{
    {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'},
    {'T', ' ', ' ', ' ', ' ', ' ', ' ', 'W'},
    {'W', 'W', 'W', ' ', 'W', ' ', 'W', 'W'},
    {'W', ' ', ' ', ' ', 'W', 'W', ' ', 'W'},
    {'W', 'W', 'W', ' ', ' ', 'W', ' ', 'W'},
    {'W', ' ', 'W', 'W', ' ', 'W', ' ', 'W'},
    {'W', ' ', ' ', ' ', ' ', ' ', ' ', 'W'},
    {'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W'}
};

//const int CDungeon::sizeDungeonX = sizeof(area[0]) / sizeof(area[0][0]);
//const int CDungeon::sizeDungeonY = sizeof(area)    / sizeof(area[0]);

CDungeon::CDungeon(void)
{
}

CDungeon::~CDungeon(void)
{
}

int CDungeon::getMaxX()
{
    return sizeDungeonX;
}

int CDungeon::getMaxY()
{
    return sizeDungeonY;
}

void CDungeon::setCell(CPos2D* pos_, char sign_)
{
    this->area[pos_->y][pos_->x] = sign_;
}

char CDungeon::getCell(int y_, int x_)
{
    return this->area[y_][x_];
}