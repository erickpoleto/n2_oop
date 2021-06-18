#include "FuncionariosBD.hpp"

FuncionariosBD::FuncionariosBD()
{}

void FuncionariosBD::adicionaFornecedor(Fornecedor fornecedor)
{
    this->fornecedores.push_back(fornecedor);
}

void FuncionariosBD::removeFornecedor(int pos)
{
    this->fornecedores.erase(this->fornecedores.begin() + pos);
}

void FuncionariosBD::adicionaAdministrador(Administrador administrador)
{
    this->administradores.push_back(administrador);
}

void FuncionariosBD::removeAdministrador(int pos)
{
    this->administradores.erase(this->administradores.begin() + pos);
}

void FuncionariosBD::adicionaOperario(Operario operario)
{
    this->operarios.push_back(operario);
}

void FuncionariosBD::removeOperario(int pos)
{
    this->operarios.erase(this->operarios.begin() + pos);
}

void FuncionariosBD::adicionaVendedor(Vendedor vendedor)
{
    this->vendedores.push_back(vendedor);
}

void FuncionariosBD::removeVendedor(int pos)
{
    this->vendedores.erase(this->vendedores.begin() + pos);
}

vector<Fornecedor> FuncionariosBD::getFornecedores()
{
    return this->fornecedores;
}

vector<Administrador> FuncionariosBD::getAdministradores()
{
    return this->administradores;
}

vector<Operario> FuncionariosBD::getOperarios()
{
    return this->operarios;
}

vector<Vendedor> FuncionariosBD::getVendedores()
{
    return this->vendedores;
}