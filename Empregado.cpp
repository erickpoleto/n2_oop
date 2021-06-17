#include "Empregado.hpp"

Empregado::Empregado(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float imposto) 
    : Pessoa(nome, endereco, telefone)
{
    this->codigoSetor = codigoSetor;
    this->salarioBase = salarioBase;
    this->imposto = imposto;
}

float Empregado::calcularSalario()
{
    return this->salarioBase - (this->imposto / 100 * this->salarioBase);
}

void Empregado::setCodigoSetor(int codigoSetor)
{
    this->codigoSetor = codigoSetor;
}

int Empregado::getCodigoSetor()
{
    return this->codigoSetor;
}

void Empregado::setSalarioBase(float salarioBase)
{
    this->salarioBase = salarioBase;
}

float Empregado::getSalarioBase()
{
    return this->salarioBase;
}

void Empregado::setImposto(float imposto)
{
    this->imposto = imposto;
}

float Empregado::getImposto()
{
    return this->salarioBase;
}
