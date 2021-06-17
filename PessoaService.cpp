#include "PessoaService.hpp"
#include "Vendedor.cpp"

FuncionariosBD PessoaService::funcionariosBD; 

PessoaService::PessoaService(FuncionariosBD funcionariosBD)
{
    PessoaService::funcionariosBD = funcionariosBD;
}

void PessoaService::incluiPessoa(FuncionariosEnum tipo)
{
    switch(tipo) {
        case FuncionariosEnum::VENDEDOR:
            this->incluiVendedor();
            break;
        case FuncionariosEnum::OPERARIO:
            break;
        case FuncionariosEnum::FORNECEDOR:
            break;
        case FuncionariosEnum::EMPREGADO:
            break;
        case FuncionariosEnum::ADMINISTRADOR:
            break;
        default:
            break;
    }
}

void PessoaService::incluiVendedor()
{
    cout << "here" << endl;
    Vendedor vendedor("erick", "dona cristina", "51996770792", 1, 120.5, 115.5, 2, 3);
    funcionariosBD.adiciona(vendedor);
}

