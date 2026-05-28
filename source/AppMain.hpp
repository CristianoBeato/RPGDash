/*
===========================================================================================
    This file is part of RPG Dash a Interetive RPG utility engine.

    Copyright (c) 2026 Cristiano B. Santos <cristianobeato_dm@hotmail.com>
    Contributor(s): none yet.

-------------------------------------------------------------------------------------------

TODO: Reference to licence 

===============================================================================================
*/
#ifndef __APP_MAIN_HPP__
#define __APP_MAIN_HPP__

#include <SDL3/SDL_window.hpp>

class crAppMain
{
public:
    crAppMain( void );
    ~crAppMain( void );
    void    Run( void );

    void    Events( void );
    void    Renderer( void );

private:
    int32_t         m_state;
    SDL::Window     m_window;
};

#endif //!__APP_MAIN_HPP__