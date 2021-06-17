#ifndef Administrador_hpp
#define Administrador_hpp

#include<iostream>
#include "Empregado.hpp"

using namespace std;

class Administrador : public Empregado 
{
public:
    Administrador(string nome, string endereco, string telefone, 
        int codigoSetor, float salarioBase, float imposto, float ajudaDeCusto);
    
    void setAjudaDeCusto(float ajudaDeCusto);
    float getAjudaDeCusto();

    float calcularSalario();

private:
    float ajudaDeCusto;
};

#endif