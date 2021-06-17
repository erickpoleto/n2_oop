#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string nome, string endereco, string telefone, float valorCredito, float valorDivida) 
    : Pessoa(nome, endereco, telefone)
{
    this->valorCredito = valorCredito;
    this->valorDivida = valorDivida;
}

float Fornecedor::obterSaldo()
{
    return this->valorCredito - this->valorDivida;
}

void Fornecedor::setValorCredito(float valorCredito)
{
    this->valorCredito = valorCredito;
}

float Fornecedor::getValorCredito()
{
    return this->valorCredito;
}

void Fornecedor::setValorDivida(float valorDivida)
{
    this->valorDivida = valorDivida;
}

float Fornecedor::getValorDivida()
{
    return this->valorDivida;
}
