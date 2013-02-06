
#include "Viking.h"
#include <iostream>


CViking::CViking(CDungeon* dungeon_, char symbol_)
    : dungeon(dungeon_)
    , symbol(symbol_)
{
	for(int indexY = 0; indexY < CDungeon::sizeDungeonY; ++indexY){
		
		for(int indexX = 0; indexX < CDungeon::sizeDungeonX; ++indexX){
            if(this->dungeon->getCell(indexY, indexX) == 'W') this->fieldVisits[indexY][indexX] = -1;
            else this->fieldVisits[indexY][indexX] = 0;
		}
	}

    position = new CPos2D();
}

CViking::~CViking(void)
{
    delete position;
}

void CViking::setPos(int y_, int x_)
{
	this->position->x = x_;
	this->position->y = y_;
    this->dungeon->setCell(this->position, this->symbol);
    this->setFieldVisit(this->position->y, this->position->x);
}

CPos2D* CViking::getPos()
{
	return this->position;
}

void CViking::setSymbol(char symbol_)
{
	this->symbol = symbol_;
}

char CViking::getSymbol()
{
	return this->symbol;
}

void CViking::setFieldVisit(int y_, int x_)
{
	this->fieldVisits[y_][x_] += 1;
}

int CViking::getFieldVisit(int y_, int x_)
{
    return this->fieldVisits[y_][x_];
}

char CViking::getUp()
{
    return this->dungeon->getCell(this->position->y + 1, this->position->x);
}

char CViking::getDown()
{
    return this->dungeon->getCell(this->position->y - 1, this->position->x);
}

char CViking::getLeft()
{
    return this->dungeon->getCell(this->position->y, this->position->x - 1);
}

char CViking::getRight()
{
    return this->dungeon->getCell(this->position->y, this->position->x + 1);
}

CDungeon* CViking::getDungeon()
{
    return this->dungeon;
}

void CViking::printFieldVisits()
{
	for(int indexY = 0; indexY < CDungeon::sizeDungeonY; ++indexY){
		std::cout << std::endl;
		for(int indexX = 0; indexX < CDungeon::sizeDungeonX; ++indexX){
			if(fieldVisits[indexY][indexX] != -1) std::cout << " ";
			std::cout << fieldVisits[indexY][indexX];
		}
	}
}

bool CViking::calcShWay(int wantedY, int wantedX)
{
    for(int iy = -1; iy <= 1; iy+=2)
    {
        if(this->getFieldVisit(this->position->y + iy, this->position->x) != -1)
            if(this->getFieldVisit(this->position->y + iy, this->position->x) < this->getFieldVisit(wantedY, wantedX)) return false;
    }

    for(int ix = -1; ix <= 1; ix+=2)
    {
        if(this->getFieldVisit(this->position->y, this->position->x + ix) != -1)
            if(this->getFieldVisit(this->position->y, this->position->x + ix) < this->getFieldVisit(wantedY, wantedX)) return false;
    }
    
    if(this->getFieldVisit(wantedY, wantedX) == -1) return false;
    else return true;
}