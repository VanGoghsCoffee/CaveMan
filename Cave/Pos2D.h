#pragma once
#ifndef CAVE_POS2D_H
#define CAVE_POS2D_H

class CPos2D
{
    public:
        int x;
        int y;
        CPos2D(void);
        CPos2D(int x_, int y_);
        ~CPos2D(void);
};

#endif /* CAVE_POS2D_H */