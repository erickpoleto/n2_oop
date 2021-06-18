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
        cout << "2 - atualizar pessoa" << endl;
        cout << "3 - imprimir cadastros" << endl;
        cout << "4 - imprimir fornecedores" << endl;
        cout << "5 - imprimir empregados" << endl;
        cout << "8 - exit" << endl;
        cout << "choose: ";
        cin >> option;
        
        switch (option)
        {
            case 1:
                pessoaService.incluirPessoa();
                break;
            case 2:
                pessoaService.atualizarPessoa();
                break;
            case 3:
                pessoaService.listarCadastros();
                break;
            case 4:
                pessoaService.listarFornecedores();
                break;
            case 5: 
                pessoaService.listarEmpregados();
                break;
            default:
                break;
        }
    }
} 