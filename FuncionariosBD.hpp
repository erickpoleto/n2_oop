#ifndef FuncionariosBD_hpp
#define FuncionariosBD_hpp

#include<iostream>
#include<vector>
#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"

using namespace std;

class FuncionariosBD
{
public:
    
    FuncionariosBD();
    
    void adicionaFornecedor(Fornecedor fornecedor);
    void adicionaAdministrador(Administrador administrador);
    void adicionaOperario(Operario fornecedor);
    void adicionaVendedor(Vendedor vendedor);

    vector<Fornecedor> getFornecedores();
    vector<Administrador> getAdministradores();
    vector<Operario> getOperarios();
    vector<Vendedor> getVendedores();

private:
    vector<Fornecedor> fornecedores;
    vector<Administrador> administradores;
    vector<Operario> operarios;
    vector<Vendedor> vendedores;

    void adicionaPessoa(Pessoa pessoa);
};

#endif