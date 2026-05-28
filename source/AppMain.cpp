/*
===========================================================================================
    This file is part of RPG Dash a Interetive RPG utility engine.

    Copyright (c) 2026 Cristiano B. Santos <cristianobeato_dm@hotmail.com>
    Contributor(s): none yet.

-------------------------------------------------------------------------------------------

TODO: Reference to licence 

===============================================================================================
*/

#include "AppMain.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char *argv[])
{
    try
    {
        crAppMain app = crAppMain();
        app.Run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}

crAppMain::crAppMain( void )
{
    // Inicializa a biblioteca SDL3
    if ( !SDL_Init( SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_EVENTS ) )
        throw std::runtime_error( SDL_GetError() );
    
}

crAppMain::~crAppMain( void )
{

    // libera biblioteca SDL
    SDL_Quit();
}

void crAppMain::Run(void)
{
}
