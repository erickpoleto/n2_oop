#include "PessoaService.hpp"
#include "Pessoa.cpp"
#include "Fornecedor.cpp"
#include "Vendedor.cpp"
#include "Operario.cpp"
#include "Administrador.cpp"

FuncionariosBD PessoaService::funcionariosBD; 

PessoaService::PessoaService(FuncionariosBD funcionariosBD)
{
    PessoaService::funcionariosBD = funcionariosBD;
}

void PessoaService::incluirPessoa()
{
    int tipo;
    cout << "\n -- Inclusão de pessoas-- \n" << endl;
    cout << "1 - vendedor" << endl;
    cout << "2 - operario" << endl;
    cout << "3 - administrador" << endl;
    cout << "4 - fornecedor" << endl;
    cout << "Escolha uma das opções:";
    cin >> tipo;
    
    switch(tipo) {
        case 1:
            this->incluirVendedor();
            break;
        case 2:
            this->incluirOperario();
            break;
        case 3:
            this->incluirAdministrador();
            break;
        case 4:
            this->incluirFornecedor();
            break;
        default:
            this->incluirVendedor();
            break;
    }
}

void PessoaService::incluirVendedor()
{
    pessoa pessoa = preenchimentoPadraoPessoa();
    empregado empregado = preenchimentoPadraoEmpregado();

    float vendas, comissao;
    cout << "Valor em vendas: ";
    cin >> vendas;
    cout << "Porcentagem comissao:";
    cin >> comissao;

    Vendedor vendedor(pessoa.nome, pessoa.endereco, pessoa.telefone, empregado.codigoSetor, 
        empregado.salarioBase, empregado.imposto, vendas, comissao);
    funcionariosBD.adicionaVendedor(vendedor);
}

void PessoaService::incluirOperario()
{
    pessoa pessoa = preenchimentoPadraoPessoa();
    empregado empregado = preenchimentoPadraoEmpregado();

    float valorProducao, comissao;
    cout << "Valor de produção: ";
    cin >> valorProducao;
    cout << "Porcentagem comissao:";
    cin >> comissao;

    Operario operario(pessoa.nome, pessoa.endereco, pessoa.telefone, empregado.codigoSetor, 
        empregado.salarioBase, empregado.imposto, valorProducao, comissao);
    funcionariosBD.adicionaOperario(operario);
}

void PessoaService::incluirAdministrador()
{
    pessoa pessoa = preenchimentoPadraoPessoa();
    empregado empregado = preenchimentoPadraoEmpregado();

    float ajudaDeCusto;
    cout << "Adjuda de custo: ";
    cin >> ajudaDeCusto;

    Administrador administrador(pessoa.nome, pessoa.endereco, pessoa.telefone, empregado.codigoSetor, 
        empregado.salarioBase, empregado.imposto, ajudaDeCusto);
    funcionariosBD.adicionaAdministrador(administrador);
}

void PessoaService::incluirFornecedor()
{
    pessoa pessoa = preenchimentoPadraoPessoa();

    float valorCredito, valorDivida;
    cout << "Valor do credito: ";
    cin >> valorCredito;
    cout << "Valor da divida: ";
    cin >> valorDivida;

    Fornecedor fornecedor(pessoa.nome, pessoa.endereco, pessoa.telefone, valorCredito, valorDivida);
    funcionariosBD.adicionaFornecedor(fornecedor);
}


PessoaService::pessoa PessoaService::preenchimentoPadraoPessoa()
{
    pessoa pessoa;
    cout << "Nome: ";
    cin >> pessoa.nome;
    cout << "Endereço: ";
    cin >> pessoa.endereco;
    cout << "Telefone: ";
    cin >> pessoa.telefone;
    return pessoa;
}

PessoaService::empregado PessoaService::preenchimentoPadraoEmpregado()
{
    empregado empregado;
    cout << "Setor: ";
    cin >> empregado.codigoSetor;
    cout << "Salário base: ";
    cin >> empregado.salarioBase;
    cout << "Porcentagem imposto: ";
    cin >> empregado.imposto;
    return empregado;
}

void PessoaService::listarCadastros()
{
    cout << "\n-- Listagem de cadastros -- \n" << endl;

    imprimeVendedoresCadastrados(0, funcionariosBD.getVendedores().size(), funcionariosBD.getVendedores(), true);
    imprimeOperariosCadastrados(0, funcionariosBD.getOperarios().size(), funcionariosBD.getOperarios(), true);
    imprimeAdministradoresCadastrados(0, funcionariosBD.getAdministradores().size(), funcionariosBD.getAdministradores(), true);
    imprimeFornecedoresCadastrados(0, funcionariosBD.getFornecedores().size(), funcionariosBD.getFornecedores(), true);

    cout << endl;
}

void PessoaService::listarFornecedores()
{
    cout << "\n-- Listagem de fornecedores -- \n" << endl;

    imprimeFornecedoresCadastrados(0, funcionariosBD.getFornecedores().size(), funcionariosBD.getFornecedores(), false);

    cout << endl;
}

void PessoaService::listarEmpregados()
{
    cout << "\n-- Listagem de empregados -- \n" << endl;
    
    if(funcionariosBD.getVendedores().size() > 0)
    {
        cout << "\n-- Vendedores -- \n" << endl;
        imprimeVendedoresCadastrados(0, funcionariosBD.getVendedores().size(), funcionariosBD.getVendedores(), false);
    }
    if(funcionariosBD.getOperarios().size() > 0) 
    {
        cout << "\n-- Operarios -- \n" << endl;
        imprimeOperariosCadastrados(0, funcionariosBD.getOperarios().size(), funcionariosBD.getOperarios(), false);
    }
    if(funcionariosBD.getAdministradores().size() > 0)
    {
        cout << "\n-- Administradores -- \n" << endl;
        imprimeAdministradoresCadastrados(0, funcionariosBD.getAdministradores().size(), funcionariosBD.getAdministradores(), false);
    }
    cout << endl;
}


void PessoaService::imprimeVendedoresCadastrados(int contagem, int fim, vector<Vendedor> vendedores, bool apenasDadosPessoais)
{
    if(contagem < fim)
    {
        cout << "nome: " << vendedores[contagem].getNome() << ", Endereço: " 
            << vendedores[contagem].getEndereco() << ", telefone: " 
            << vendedores[contagem].getTelefone(); 
        if(!apenasDadosPessoais){
            cout << ", setor: " << vendedores[contagem].getCodigoSetor() 
                << ", salário base: " << vendedores[contagem].getSalarioBase()
                << ", imposto: " << vendedores[contagem].getImposto() << "%"
                << ", valor de vendas: " << vendedores[contagem].getValorVendas() 
                << ", comissão: " << vendedores[contagem].getComissao() << "%"
                << ", salário: " << vendedores[contagem].calcularSalario();
        }
        cout << endl;
        contagem++;
        if(contagem < fim) imprimeVendedoresCadastrados(contagem, fim, vendedores, true);
    }
}

void PessoaService::imprimeOperariosCadastrados(int contagem, int fim, vector<Operario> operarios, bool apenasDadosPessoais)
{
    if(contagem < fim)
    {
        cout << "nome: " << operarios[contagem].getNome() << ", Endereço: " << operarios[contagem].getEndereco() 
            << ", telefone: " << operarios[contagem].getTelefone();
        if(!apenasDadosPessoais) {
            cout << ", setor: " << operarios[contagem].getCodigoSetor() 
                << ", salário base: " << operarios[contagem].getSalarioBase()
                << ", imposto: " << operarios[contagem].getImposto() << "%"
                << ", valor de produção: " << operarios[contagem].getValorProducao() 
                << ", comissão: " << operarios[contagem].getComissao() << "%"
                << ", salário: " << operarios[contagem].calcularSalario();
        }
        cout << endl;
        contagem++;
        if(contagem < fim) imprimeOperariosCadastrados(contagem, fim, operarios, true);
    }
}

void PessoaService::imprimeAdministradoresCadastrados(int contagem, int fim, vector<Administrador> administradores, bool apenasDadosPessoais)
{
    if(contagem < fim)
    {
        cout << "nome: " << administradores[contagem].getNome() << ", Endereço: " << administradores[contagem].getEndereco() 
            << ", telefone: " << administradores[contagem].getTelefone();
        if(!apenasDadosPessoais) {
            cout << ", setor: " << administradores[contagem].getCodigoSetor() 
                << ", salário base: " << administradores[contagem].getSalarioBase()
                << ", imposto: " << administradores[contagem].getImposto() << "%"
                << ", ajuda de custo: " << administradores[contagem].getAjudaDeCusto()
                << ", salário: " << administradores[contagem].calcularSalario();
        }
        cout << endl;
        contagem++;
        if(contagem < fim) imprimeAdministradoresCadastrados(contagem, fim, administradores, true);
    }
}

void PessoaService::imprimeFornecedoresCadastrados(int contagem, int fim, vector<Fornecedor> fornecedores, bool apenasDadosPessoais)
{
    if(contagem < fim)
    {
        cout << "nome: " << fornecedores[contagem].getNome() << ", Endereço: " << fornecedores[contagem].getEndereco() 
            << ", telefone: " << fornecedores[contagem].getTelefone();
        if(!apenasDadosPessoais) {
            cout << ", valor de credito: " << fornecedores[contagem].getValorCredito() 
                << ", valor de divida: " << fornecedores[contagem].getValorDivida()
                << ", saldo: " << fornecedores[contagem].obterSaldo();
        }
        cout << endl;
        contagem++;
        if(contagem < fim) imprimeFornecedoresCadastrados(contagem, fim, fornecedores, true);
    }
}