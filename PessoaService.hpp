#ifndef PessoaService_hpp
#define PessoaService_hpp

#include<iostream>
#include "FuncionariosBD.hpp"
#include "FuncionariosEnum.hpp"

using namespace std;

class PessoaService
{
public:
    PessoaService(FuncionariosBD funcionariosBD);
    
    void incluiPessoa(FuncionariosEnum tipo);

private:
    FuncionariosBD static funcionariosBD;

    void incluiVendedor();
};

#endif