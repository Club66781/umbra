#include <Umbra/Applications.h>

#include <iostream>

#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#endif


int main()
{
#if _DEBUG
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    Applications* app = new Applications();

    int returnState = app->Run();

    delete app;

    return returnState;
}
