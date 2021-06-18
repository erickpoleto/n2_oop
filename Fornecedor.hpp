#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include<iostream>
#include "Pessoa.hpp"

using namespace std;

class Fornecedor : public Pessoa 
{
public:
    Fornecedor(string nome, string endereco, string telefone, float valorCredito, float valorDivida);
    
    void setValorCredito(float valorCredito);
    float getValorCredito();
    void setValorDivida(float valorDivida);
    float getValorDivida();
    
    float obterSaldo();

private:
    float valorCredito;
    float valorDivida;

};

#endif