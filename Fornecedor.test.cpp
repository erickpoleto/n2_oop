#include "Fornecedor.cpp"
#include "Pessoa.cpp"

void criaFornecedor();

void test() {
    criaFornecedor();
}

void criaFornecedor()
{
    Fornecedor fornecedor("erick", "dona cristina", "51996770792", 120.5, 115.5);
    cout << fornecedor.obterSaldo() << endl;
}