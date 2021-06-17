#ifndef Pessoa_hpp
#define Pessoa_hpp

#include<iostream>

using namespace std;

class Pessoa
{
public:
    Pessoa(string nome, string endereco, string telefone);
    
    void setNome(string nome);
    string getNome();
    void setEndereco(string endereco);
    string getEndereco();
    void setTelefone(string telefone);
    string getTelefone();

private:
    string nome;
    string endereco;
    string telefone;
};

#endif