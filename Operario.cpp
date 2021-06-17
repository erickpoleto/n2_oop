#include "Operario.hpp"

Operario::Operario(string nome, string endereco, string telefone, int codigoSetor, 
                    float salarioBase, float imposto, float valorProducao, float comissao) 
    : Empregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto)
{
    this->valorProducao = valorProducao;
    this->comissao = comissao;
}

float Operario::calcularSalario()
{
    return (this->salarioBase - (this->imposto / 100 * this->salarioBase)) + ((this->comissao / 100) * this->valorProducao);
}

void Operario::setValorProducao(float valorProducao)
{
    this->valorProducao = valorProducao;
}

float Operario::getValorProducao()
{
    return this->valorProducao;
}

void Operario::setComissao(float comissao)
{
    this->comissao = comissao;
}

float Operario::getComissao()
{
    return this->comissao;
}
