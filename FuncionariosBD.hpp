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
    void removeFornecedor(int pos);
    void adicionaAdministrador(Administrador administrador);
    void removeAdministrador(int pos);
    void adicionaOperario(Operario fornecedor);
    void removeOperario(int pos);
    void adicionaVendedor(Vendedor vendedor);
    void removeVendedor(int pos);

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