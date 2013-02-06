#include "Logic.h"
#include "Viking.h"


CLogic::CLogic()
    : indexVikings(0)
{
}

CLogic::~CLogic(void)
{
}

bool CLogic::computeTurn()
{
	int check = 0;



	for(int index = 0; index < vikingArraySize; ++index){
            if (vikings[index]->search()){
				++check;
			}
			else vikings[index]->move();

			if(check == vikingArraySize) return true;
	}
	return false;
}

void CLogic::setStartPositions()
{
	this->vikings[0]->setPos(1, 1);
	this->vikings[1]->setPos(1, 6);
	this->vikings[2]->setPos(6, 6);
}

void CLogic::setViking(CViking* viking_)
{
    if(indexVikings <= vikingArraySize)
    {
        this->vikings[indexVikings] = viking_;
        ++this->indexVikings;
    }
}