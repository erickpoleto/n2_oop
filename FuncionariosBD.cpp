#include "FuncionariosBD.hpp"

FuncionariosBD::FuncionariosBD()
{}

void FuncionariosBD::adicionaFornecedor(Fornecedor fornecedor)
{
    this->fornecedores.push_back(fornecedor);
}

void FuncionariosBD::adicionaAdministrador(Administrador administrador)
{
    this->administradores.push_back(administrador);
}

void FuncionariosBD::adicionaOperario(Operario operario)
{
    this->operarios.push_back(operario);
}

void FuncionariosBD::adicionaVendedor(Vendedor vendedor)
{
    this->vendedores.push_back(vendedor);
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