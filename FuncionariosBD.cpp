#include "FuncionariosBD.hpp"

FuncionariosBD::FuncionariosBD()
{}

void FuncionariosBD::adiciona(Pessoa funcionario) 
{
    this->funcionarios.push_back(funcionario);
}

void FuncionariosBD::lista()
{   
    cout << "here" << this->funcionarios.size() << endl;
    for(int i = 0; i < this->funcionarios.size(); i++) 
    {
        cout << this->funcionarios[i].getNome() << endl;
    }
}