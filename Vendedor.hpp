#ifndef Vendedor_hpp
#define Vendedor_hpp

#include<iostream>
#include "Empregado.hpp"

using namespace std;

class Vendedor : public Empregado 
{
public:
    Vendedor(string nome, string endereco, string telefone, 
        int codigoSetor, float salarioBase, float imposto, float valorVendas, float comissao);
    
    void setValorVendas(float valorVendas);
    float getValorVendas();
    void setComissao(float comissao);
    float getComissao();

    float calcularSalario();

private:
    float valorVendas;
    float comissao;
};

#endif