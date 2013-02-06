#include "Renderer.h"
#include <iostream>


CRenderer::CRenderer(CDungeon* dungeon_)
    : dungeon(dungeon_)
{
}

CRenderer::~CRenderer(void)
{
}

void CRenderer::render()
{
	std::cout << std::endl;
    for(int y = 0; y < CDungeon::sizeDungeonY; ++y)
    {
        std::cout << std::endl;
        for(int x = 0; x < CDungeon::sizeDungeonX; ++x)
        {
			if(this->dungeon->getCell(y, x) == 'A') std::cout << "1 ";
			else if(this->dungeon->getCell(y, x) == 'E') std::cout << "2 ";
			else if(this->dungeon->getCell(y, x) == 'O') std::cout << "3 ";
			else if(this->dungeon->getCell(y, x) == ' ') std::cout << "* ";
			
			else std::cout << this->dungeon->getCell(y, x) << " ";
        }
    }

}
