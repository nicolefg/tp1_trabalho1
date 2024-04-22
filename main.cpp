#include <iostream>
#include "testes_dominios.h"
#include "testes_entidades.h"

using namespace std;

int main(){
cout << "---------- Testando Dominios ----------" << endl;

    TesteCodigoPagamento testeCodPag;
    cout << "Testando Código Pagamento: " << testeCodPag.run() << endl;

    TesteCodigoTitulo testeCodTit;
    cout << "Testando Código Título: " << testeCodTit.run() << endl;

    TesteCPF testeCPF;
    cout << "Testando CPF: " << testeCPF.run() << endl;

    TesteData testeData;
    cout << "Testando Data: " << testeData.run() << endl;

    TesteDinheiro testeDinheiro;
    cout << "Testando Dinheiro: " << testeDinheiro.run() << endl;

    TesteEstado testeEstado;
    cout << "Testando Estado: " << testeEstado.run() << endl;

    TesteNome testeNome;
    cout << "Testando Nome: " << testeNome.run() << endl;

    TestePercentual testePercentual;
    cout << "Testando Percentual: " << testePercentual.run() << endl;

    TesteSenha testeSenha;
    cout << "Testando Senha: " << testeSenha.run() << endl;

    TesteSetor testeSetor;
    cout << "Testando Setor: " << testeSetor.run() << endl;

    cout << "---------- Testando Entidades ----------" << endl;

    TesteConta testeConta;
    cout << "Testando Conta: " << testeConta.run() << endl;

    TesteTitulo testeTitulo;
    cout << "Testando Titulo: " << testeTitulo.run() << endl;

    TestePagamento testePagamento;
    cout << "Testando Pagamento: " << testePagamento.run() << endl;

    return 0;
}