
#ifndef __ANTECEDENTES_HPP__
#define __ANTECEDENTES_HPP__

enum antecedentes_tipos_t
{
    ANTECEDENTES_COUNT
};

struct antecedentes_propriedades_t
{
    const char* nome
};

extern antecedentes_propriedades_t g_antecedentes[ANTECEDENTES_COUNT];
#endif //!__ANTECEDENTES_HPP__