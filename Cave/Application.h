#pragma once
#ifndef CAVE_APPLICATION_H
#define CAVE_APPLICATION_H

#include "Logic.h"
#include "Renderer.h"

class CApplication
{
public:
    CApplication(void);
    ~CApplication(void);
    int main( int argc, const char* argv[] );
    void run(CLogic* logic_, CRenderer* renderer_);
};

#endif /* CAVE_APPLICATION_H */