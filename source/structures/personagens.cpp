
#include "personagens.hpp"

crPersoangem::crPersoangem( void )
{
}

crPersoangem::~crPersoangem( void )
{
}

classe_propriedades_t crPersoangem::Classe(void) const
{
    return g_classes[m_classe];
}
