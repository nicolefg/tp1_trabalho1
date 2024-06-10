#include "testes_entidades.h"

// Implementacoes do metodo "run" da classe TesteEntidade
// Executa a sequencia de testes: setup, teste de cenario de sucesso e teardown
string TesteEntidade::run(){
    setUp();             // Inicializa o ambiente de teste
    testarCenarioSucesso(); //Testa cenario de sucesso
    tearDown();          // Finaliza o ambiente de teste
    return situacao;     // Retorna a situacao do teste
};


// --------------
// Implementacao dos metodos da classe TesteConta
void TesteConta::setUp(){
    conta = new Conta();
    situacao = SUCESSO;
}
void TesteConta::tearDown(){
    delete conta;
}

void TesteConta::testarCenarioSucesso(){
    CPF cpf;
    cpf.setValor(CPF_VALIDO);
    conta->setCPF(cpf);
    if(conta->getCPF().getValor() != CPF_VALIDO)
        situacao = FALHA;

    Nome nome;
    nome.setValor(NOME_VALIDO);
    conta->setNome(nome);
    if(conta->getNome().getValor() != NOME_VALIDO)
        situacao = FALHA;

    Senha senha;
    senha.setValor(SENHA_VALIDA);
    conta->setSenha(senha);
    if(conta->getSenha().getValor() != SENHA_VALIDA)
        situacao = FALHA;
};


// --------------
// Implementacao dos metodos da classe TesteTitulo
void TesteTitulo::setUp(){
    titulo = new Titulo();
    situacao = SUCESSO;
}
void TesteTitulo::tearDown(){
    delete titulo;
}

void TesteTitulo::testarCenarioSucesso(){
    CodigoTitulo codigo;
    codigo.setValor(CODIGOTIT_VALIDO);
    titulo->setCodigo(codigo);
    if(titulo->getCodigo().getValor() != CODIGOTIT_VALIDO)
        situacao = FALHA;

    Nome emissor;
    emissor.setValor(EMISSOR_VALIDO);
    titulo->setEmissor(emissor);
    if(titulo->getEmissor().getValor() != EMISSOR_VALIDO)
        situacao = FALHA;

    Setor setor;
    setor.setValor(SETOR_VALIDO);
    titulo->setSetor(setor);
    if(titulo->getSetor().getValor() != SETOR_VALIDO)
        situacao = FALHA;

    Data emissao;
    emissao.setValor(EMISSAO_VALIDA);
    titulo->setEmissao(emissao);
    if(titulo->getEmissao().getValor() != EMISSAO_VALIDA)
        situacao = FALHA;

    Data vencimento;
    vencimento.setValor(VENCIMENTO_VALIDO);
    titulo->setVencimento(vencimento);
    if(titulo->getVencimento().getValor() != VENCIMENTO_VALIDO)
        situacao = FALHA;

    Dinheiro valor;
    valor.setValor(VALOR_VALIDO);
    titulo->setValor(valor);
    if(titulo->getValor().getValor() != VALOR_VALIDO)
        situacao = FALHA;
};


// --------------
// Implementacao dos metodos da classe TestePagamento
void TestePagamento::setUp(){
    pagamento = new Pagamento();
    situacao = SUCESSO;
}
void TestePagamento::tearDown(){
    delete pagamento;
}

void TestePagamento::testarCenarioSucesso(){
    CodigoPagamento codigo;
    codigo.setValor(CODIGOPAG_VALIDO);
    pagamento->setCodigo(codigo);
    if(pagamento->getCodigo().getValor() != CODIGOPAG_VALIDO)
        situacao = FALHA;

    Data data;
    data.setValor(DATA_VALIDA);
    pagamento->setData(data);
    if(pagamento->getData().getValor() != DATA_VALIDA)
        situacao = FALHA;

    Percentual percentual;
    percentual.setValor(PERCENTUAL_VALIDO);
    pagamento->setPercentual(percentual);
    if(pagamento->getPercentual().getValor() != PERCENTUAL_VALIDO)
        situacao = FALHA;

    Estado estado;
    estado.setValor(ESTADO_VALIDO);
    pagamento->setEstado(estado);
    if(pagamento->getEstado().getValor() != ESTADO_VALIDO)
        situacao = FALHA;
};