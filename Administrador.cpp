#include "Administrador.hpp"

Administrador::Administrador(string nome, string endereco, string telefone, int codigoSetor, float salarioBase, float imposto, float ajudaDeCusto) 
    : Empregado(nome, endereco, telefone, codigoSetor, salarioBase, imposto)
{
    this->ajudaDeCusto = ajudaDeCusto;
}

float Administrador::calcularSalario()
{
    return (this->salarioBase - (this->imposto / 100 * this->salarioBase)) + this->ajudaDeCusto;
}

void Administrador::setAjudaDeCusto(float ajudaDeCusto)
{
    this->ajudaDeCusto = ajudaDeCusto;
}

float Administrador::getAjudaDeCusto()
{
    return this->ajudaDeCusto;
}
