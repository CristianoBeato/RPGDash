
#ifndef __CARACTER_HPP__
#define __CARACTER_HPP__

struct personagem_atributos_t
{
    uint32_t    strength;             // Força do personagem
    uint32_t    dexterity;            // destreza do personagem
    uint32_t    constitution;
    uint32_t    intelligence;
    uint32_t    wisdom;           
    uint32_t    charisma;
};

struct personagem_modificadores_t
{
    int32_t         strength;
    int32_t         dexterity;
    int32_t         constitution;
    int32_t         intelligence;
    int32_t         wisdom;           
    int32_t         charisma;
};

class crPersoangem
{    
public:
    crPersoangem( void );
    ~crPersoangem( void );

    void    Update( void );
    void    Clear( void );

    classe_propriedades_t   Classe( void ) const;

private:
    classe_typo_t               m_classe;
    uint32_t                    m_level;                // nivel atual do personagem
    uint32_t                    m_pontosVidaAtuais;     //
    uint32_t                    m_pontosVidaTemporarios;
    uint32_t                    m_percepcao;            // sabedoria passiva
    uint32_t                    m_bonusProeficiencia;   //
    uint32_t                    m_experiencePoints;     // pontos de experiencia atuais
    personagem_atributos_t      m_atributos;
    personagem_modificadores_t  m_modificadores;
    std::string                 m_name;


};



#endif //!__CARACTER_HPP__