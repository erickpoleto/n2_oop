#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string endereco, string telefone)
{
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setEndereco(string endereco)
{
    this->endereco = endereco;
}

string Pessoa::getEndereco()
{
    return this->endereco;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Pessoa::getTelefone()
{
    return this->telefone;
}