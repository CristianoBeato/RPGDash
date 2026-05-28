
#ifndef __VIDEO_HPP__
#define __VIDEO_HPP__

#include "crglCore.hpp"
#include <SDL3/SDL_video.h>

typedef struct SDL_Window SDL_Window;
class crSDLContext : public gl::Context 
{
public:
    crSDLContext( void );
    ~crSDLContext( void );
    virtual bool    Create( const void* in_windowHandle );
    virtual void    Destroy( void );
    virtual bool    MakeCurrent( void );
    virtual bool    Release( void );
    virtual bool    SwapBuffers( void );
    virtual void*   GetFunctionPointer( const char* in_name ) const override;
    virtual void    DebugOuput( const char* in_message ) const;
    
private:
    SDL_Window*     m_renderWindown;
    SDL_GLContext   m_renderContext;
};

class crVideo
{
public:
    static crVideo*    Get( void );
    crVideo( void );
    ~crVideo( void );

    bool    StartUp( void );
    void    ShutDown( void );

private:

};

#endif //!__VIDEO_HPP__