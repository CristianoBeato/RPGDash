#ifndef __CLASSES_HPP__
#define __CLASSES_HPP__

enum classe_typo_t
{
    CLASSE_ARTIFICE,
    CLASSE_BARBARO,
    CLASSE_BARDO,
    CLASSE_BRUXO,
    CLASSE_CLERIGO,
    CLASSE_DRUIDA,
    CLASSE_FEITICEIRO,
    CLASSE_PATRULHEIRO,
    CLASSE_GUERREIRO,
    CLASSE_LADINO,
    CLASSE_MAGO,
    CLASSE_MONGE,
    CLASSE_PALADINO,
    CLASSES_COUNT
};

struct classe_propriedades_t
{
    const char*     nome;
    habilidades_t   habilidades;
};

extern classe_propriedades_t g_classes[CLASSES_COUNT];


#endif //!__CLASSES_HPP__