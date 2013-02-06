#include "Application.h"
#include "Dungeon.h"
#include "Astrid.h"
#include "Erik.h"
#include "Olaf.h"

CApplication::CApplication(void)
{
}


CApplication::~CApplication(void)
{
}

int main( int argc, const char* argv[] )
{
    CDungeon* dungeon = new CDungeon();
    CRenderer* renderer = new CRenderer(dungeon);
    CAstrid* astrid = new CAstrid(dungeon, 'A');
    CErik* erik = new CErik(dungeon, 'E');
    COlaf* olaf = new COlaf(dungeon, 'O');
    CLogic* logic = new CLogic();
    CApplication* application = new CApplication();

    logic->setViking(astrid);
    logic->setViking(erik);
    logic->setViking(olaf);
    logic->setStartPositions();
    application->run(logic, renderer);

    delete dungeon;
    delete renderer;
    delete astrid;
    delete erik;
    delete olaf;
    delete logic;
    delete application;

    return 0;
}

void CApplication::run(CLogic* logic_, CRenderer* renderer_)
{   
	while(!logic_->computeTurn()){
        renderer_->render();
	}

   
}