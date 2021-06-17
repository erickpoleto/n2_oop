#ifndef Operario_hpp
#define Operario_hpp

#include<iostream>
#include "Empregado.hpp"

using namespace std;

class Operario : public Empregado 
{
public:
    Operario(string nome, string endereco, string telefone, 
        int codigoSetor, float salarioBase, float imposto, float valorProducao, float comissao);
    
    void setValorProducao(float valorProducao);
    float getValorProducao();
    void setComissao(float comissao);
    float getComissao();

    float calcularSalario();

private:
    float valorProducao;
    float comissao;
};

#endif