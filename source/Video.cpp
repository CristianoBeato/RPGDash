
#include "Video.hpp"

crSDLContext::crSDLContext( void ) : 
    m_renderWindown( nullptr ), 
    m_renderContext( nullptr )
{
}

crSDLContext::~crSDLContext( void )
{
}

bool crSDLContext::Create( const void* in_windowHandle )
{
    m_renderWindown = (SDL_Window*)in_windowHandle;

    m_renderContext = SDL_GL_CreateContext( m_renderWindown );
    if ( !m_renderContext )
        return false;
    
    Init();

    return true;
}

void crSDLContext::Destroy( void )
{
    if ( m_renderContext != nullptr )
    {
        SDL_GL_DestroyContext( m_renderContext );
        m_renderContext = nullptr;
    }
}

bool crSDLContext::MakeCurrent( void )
{
    return SDL_GL_MakeCurrent( m_renderWindown, nullptr );
}

bool crSDLContext::Release( void )
{
    // make it true
    return SDL_GL_MakeCurrent( m_renderWindown, nullptr );
}

bool crSDLContext::SwapBuffers( void )
{
    return SDL_GL_SwapWindow( m_renderWindown );
}

void* crSDLContext::GetFunctionPointer( const char* in_name ) const
{
    return (void*)SDL_GL_GetProcAddress( in_name );
}

void crSDLContext::DebugOuput( const char* in_message ) const
{
    std::cerr << in_message << std::endl;
}

crVideo *crVideo::Get(void)
{
    static crVideo gVideo = crVideo();
    return &gVideo;
}

crVideo::crVideo( void )
{
}

crVideo::~crVideo( void )
{
}

bool crVideo::StartUp(void)
{
    return true;
}

void crVideo::ShutDown(void)
{
}
