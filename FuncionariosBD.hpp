#ifndef FuncionariosBD_hpp
#define FuncionariosBD_hpp

#include<iostream>
#include<vector>
#include "Pessoa.hpp"

using namespace std;

class FuncionariosBD
{
public:
    
    FuncionariosBD();
    
    void adiciona(Pessoa funcionario);
    void lista();

private:
    vector<Pessoa> funcionarios;
};

#endif