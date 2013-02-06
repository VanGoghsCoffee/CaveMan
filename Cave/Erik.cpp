#include "Erik.h"


CErik::CErik(CDungeon* dungeon_, char symbol_)
    : CViking(dungeon_, symbol_)
{
}


CErik::~CErik(void)
{
}

bool CErik::search()
{
    if ( this->getLeft() == 'T') return true;
    if ( this->getRight() == 'T') return true;
    if ( this->getUp() == 'T') return true;
    if ( this->getDown() == 'T') return true;

    return false;
}

void CErik::move()
{
    if(this->calcShWay(this->getPos()->y, this->getPos()->x - 1)) setPos(this->getPos()->y, this->getPos()->x - 1);
    else if(this->calcShWay(this->getPos()->y, this->getPos()->x + 1)) setPos(this->getPos()->y, this->getPos()->x + 1);
    else if(this->calcShWay(this->getPos()->y + 1, this->getPos()->x)) setPos(this->getPos()->y + 1, this->getPos()->x);
    else if(this->calcShWay(this->getPos()->y - 1, this->getPos()->x)) setPos(this->getPos()->y - 1, this->getPos()->x);
}