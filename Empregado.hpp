#ifndef Empregado_hpp
#define Empregado_hpp

#include<iostream>
#include "Pessoa.hpp"

using namespace std;

class Empregado : public Pessoa 
{
public:
    Empregado(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float imposto);
    
    void setCodigoSetor(int codigoSetor);
    int getCodigoSetor();
    void setSalarioBase(float salarioBase);
    float getSalarioBase();
    void setImposto(float imposto);
    float getImposto();

    float calcularSalario();

private:
    int codigoSetor;
protected:
    float salarioBase;
    float imposto;

};

#endif