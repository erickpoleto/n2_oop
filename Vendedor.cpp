#include "Vendedor.hpp"

Vendedor::Vendedor(string nome, string endereco, string telefone, int codigoSetor, 
                    float salarioBase, float imposto, float valorVendas, float comissao) 
    : Empregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto)
{
    this->valorVendas = valorVendas;
    this->comissao = comissao;
}

float Vendedor::calcularSalario()
{
    return (this->salarioBase - (this->imposto / 100 * this->salarioBase)) + ((this->comissao / 100) * this->valorVendas);
}

void Vendedor::setValorVendas(float valorVendas)
{
    this->valorVendas = valorVendas;
}

float Vendedor::getValorVendas()
{
    return this->valorVendas;
}

void Vendedor::setComissao(float comissao)
{
    this->comissao = comissao;
}

float Vendedor::getComissao()
{
    return this->comissao;
}