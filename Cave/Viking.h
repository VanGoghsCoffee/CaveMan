#pragma once
#ifndef CAVE_VIKING_H
#define CAVE_VIKING_H

#include "Pos2D.h"
#include "Dungeon.h"

class CViking
{
public:
    CViking(CDungeon* dungeon_, char symbol_);
    ~CViking(void);
    virtual bool search() = 0;
    virtual void move() = 0;
	void setPos(int y_, int x_);
	CPos2D* getPos();
	void setSymbol(char symbol_);
	char getSymbol();
	void setFieldVisit(int y_, int x_);
    int getFieldVisit(int y_, int x_);
    char getUp();
    char getDown();
    char getLeft();
    char getRight();
    CDungeon* getDungeon();
	void printFieldVisits();
    bool calcShWay(int wantedY, int wantedX);
	
private:
    CPos2D* position;
    char    symbol;
    int     fieldVisits[CDungeon::sizeDungeonY][CDungeon::sizeDungeonX];
    CDungeon* dungeon;
};

#endif /* CAVE_VIKING_H */