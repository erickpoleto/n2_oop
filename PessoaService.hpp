#ifndef PessoaService_hpp
#define PessoaService_hpp

#include<iostream>
#include <vector>
#include "FuncionariosBD.hpp"
#include "FuncionariosEnum.hpp"
#include "Pessoa.hpp"

using namespace std;

class PessoaService
{
public:
    PessoaService(FuncionariosBD funcionariosBD);
    
    void incluirPessoa();
    void atualizarPessoa();
    void listarCadastros();
    void listarFornecedores();
    void listarEmpregados();
    
private:
    FuncionariosBD static funcionariosBD;

    struct pessoa
    {
        string nome, endereco, telefone;
    } typedef pessoa;

    struct empregado
    {
        int codigoSetor;
        float salarioBase; 
        float imposto;
    } typedef empregado;
    
    struct encontraPessoa
    {
        string nome, telefone;
    } typedef encontraPessoa;

    int menuTipoPessoa();

    pessoa preenchimentoPadraoPessoa();
    empregado preenchimentoPadraoEmpregado();
    encontraPessoa preenchimentoEncontraPessoa();
    
    void incluirFornecedor();
    void atualizarFornecedor();
    void incluirOperario();
    void atualizarOperario();
    void incluirAdministrador();
    void atualizarAdministrador();
    void incluirVendedor();
    void atualizarVendedor();

    void imprimeVendedoresCadastrados(int contagem, int fim, vector<Vendedor> vendedores, bool apenasDadosPessoais);
    void imprimeOperariosCadastrados(int contagem, int fim, vector<Operario> operarios, bool apenasDadosPessoais);
    void imprimeAdministradoresCadastrados(int contagem, int fim, vector<Administrador> administradores, bool apenasDadosPessoais);
    void imprimeFornecedoresCadastrados(int contagem, int fim, vector<Fornecedor> fornecedores, bool apenasDadosPessoais);
};

#endif