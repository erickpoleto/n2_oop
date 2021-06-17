#include "Fornecedor.cpp"
#include "Empregado.cpp"
#include "Pessoa.cpp"
#include "Administrador.cpp"
#include "Operario.cpp"
#include "FuncionariosBD.cpp"
#include "FuncionariosEnum.hpp"
#include "PessoaService.cpp"

using namespace std;

int main()
{
    FuncionariosBD funcionarios;

    PessoaService pessoaService(funcionarios);

    int option;
    while(true) {
        cout << "Sistema" << endl;
        cout << "Sys: v0.1-beta2" << endl;
        cout << "1 - incluir pessoa" << endl;
        cout << "8 - exit" << endl;
        cout << "choose: ";
        cin >> option;
        
        switch (option)
        {
            case 1:
                pessoaService.incluiPessoa(FuncionariosEnum::VENDEDOR);
                funcionarios.lista();
                break;
            default:
                break;
        }
    }
} 