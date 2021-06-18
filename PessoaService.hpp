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
    void listarCadastros();
    void listarFornecedores();
    void listarEmpregados();
    
private:
    FuncionariosBD static funcionariosBD;

    struct pessoa
    {
        string nome;
        string endereco;
        string telefone;
    } typedef pessoa;
    struct empregado
    {
        int codigoSetor;
        float salarioBase; 
        float imposto;
    } typedef empregado;
 
    pessoa preenchimentoPadraoPessoa();
    empregado preenchimentoPadraoEmpregado();
    void incluirFornecedor();
    void incluirOperario();
    void incluirAdministrador();
    void incluirVendedor();
    
    void imprimeVendedoresCadastrados(int contagem, int fim, vector<Vendedor> vendedores, bool apenasDadosPessoais);
    void imprimeOperariosCadastrados(int contagem, int fim, vector<Operario> operarios, bool apenasDadosPessoais);
    void imprimeAdministradoresCadastrados(int contagem, int fim, vector<Administrador> administradores, bool apenasDadosPessoais);
    void imprimeFornecedoresCadastrados(int contagem, int fim, vector<Fornecedor> fornecedores, bool apenasDadosPessoais);
};

#endif