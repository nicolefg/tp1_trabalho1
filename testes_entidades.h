#ifndef TESTES_H_ENT_INCLUDED
#define TESTES_H_ENT_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

#include "dominios.h"
#include "entidades.h"

/**
 *
 * @brief Classe abstrata que representa um teste de entidade generico
 */
class TesteEntidade { //221030858
    private:
        virtual void setUp()= 0;                // Metodo para criar unidade em teste
        virtual void tearDown()= 0;             // Metodo para destruir unidade em teste
        virtual void testarCenarioSucesso()= 0; // Cenario de teste sucesso
    protected:
        /**
        * @brief Atributo protegido que armazena o valor da situacao do teste
        */
        string situacao;
    public:    
    /**
    * @brief Constante respresentando o sucesso do teste
    */
        const string SUCESSO =  "Sucesso!";
    /**
    * @brief Constante respresentando a falha do teste
    */
        const string FALHA = "Erro.";
    /**
    * @brief Metodo para executar o teste
    * @return O estado do teste (SUCESSO ou FALHA)
    */
        string run();
};

// ------------------------------------
/**
 * @brief Classe para testar a entidade Conta
 */
class TesteConta : public TesteEntidade { //221030858
private:
    const string CPF_VALIDO = "343.539.501-00";
    const string NOME_VALIDO = "Valeria Penna";
    const string SENHA_VALIDA = "586794";
    Conta *conta;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
};

// --------------
/**
 * @brief Classe para testar a entidade Titulo
 */
class TesteTitulo : public TesteEntidade { //221030858
private:
    const string CODIGOTIT_VALIDO = "LCI00000000";
    const string EMISSOR_VALIDO = "Wagner Nunes";
    const string SETOR_VALIDO = "Energia";
    const string EMISSAO_VALIDA = "01-11-2001";
    const string VENCIMENTO_VALIDO = "01-11-2099";
    const string VALOR_VALIDO = "999.999,99";
    Titulo *titulo;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
};

// --------------
/**
 * @brief Classe para testar a entidade Pagamento
 */
class TestePagamento : public TesteEntidade { //221030858
private:
    const string CODIGOPAG_VALIDO = "87654321";
    const string DATA_VALIDA = "31-07-2068";
    const string PERCENTUAL_VALIDO = "69";
    const string ESTADO_VALIDO = "Inadimplente";
    Pagamento *pagamento;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
};


#endif // TESTES_H_ENT_INCLUDED