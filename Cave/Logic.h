#pragma once
#ifndef CAVE_LOGIC_H
#define CAVE_LOGIC_H

#include "Viking.h"

class CLogic
{
public:
	CLogic();
    ~CLogic(void);
	static const int vikingArraySize = 3;
	bool computeTurn();
	void setStartPositions();
    void setViking(CViking* viking_);

private:
	CViking* vikings[vikingArraySize];
    int indexVikings;
};

#endif /* CAVE_LOGIC_H */