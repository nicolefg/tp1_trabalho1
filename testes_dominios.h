#ifndef TESTES_H_DOM_INCLUDED
#define TESTES_H_DOM_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

#include "dominios.h"
#include "entidades.h"

/**
 *
 * @brief Classe abstrata que representa um teste de dominio generico
 */
class TesteDominio {
    private:
        virtual void setUp()= 0;                  // Metodo para criar unidade em teste
        virtual void tearDown()= 0;               // Metodo para destruir unidade em teste
        virtual void testarValorValido()= 0;      // Cenario de teste sucesso
        virtual void testarValorInvalido()= 0;    // Cenario de teste falha
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
        * @brief Constante respresentando a falha do teste.
        */
        const string FALHA = "Erro.";
        /**
        * @brief Metodo para executar o teste
        * @return O estado do teste (SUCESSO ou FALHA)
        */
        string run();
};

// --------------
/**
 * @brief Classe para testar o dominio CodigoPagamento
 */
class TesteCodigoPagamento : public TesteDominio {
    private:
        CodigoPagamento *codigopagamento;
        const string VALOR_VALIDO = "12345678";
        const string VALOR_INVALIDO = "01234567";
        const string VALOR_INVALIDO2 = "0123456";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio CodigoTitulo
 */
class TesteCodigoTitulo : public TesteDominio {
    private:
        CodigoTitulo *codigotitulo;
        const string VALOR_VALIDO = "CRAAH73T60O";
        const string VALOR_INVALIDO = "CRE123456AA";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio CPF
 */
class TesteCPF : public TesteDominio {
    private:
        CPF *cpf;
        const string VALOR_VALIDO = "082.534.051-97";
        const string VALOR_INVALIDO = "082.534.051-99";
        const string VALOR_INVALIDO2 = "082 534 051 97";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Data
 */
class TesteData : public TesteDominio {
    private:
        Data *data;
        const string VALOR_VALIDO = "25-09-2003";
        const string VALOR_INVALIDO = "31-09-2024";
        const string VALOR_INVALIDO2 = "31-JAN-2024";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Dinheiro
 */
class TesteDinheiro : public TesteDominio {
    private:
        Dinheiro *dinheiro;
        const string VALOR_VALIDO = "3.563,56";
        const string VALOR_INVALIDO = "1.000.001,00";
        const string VALOR_INVALIDO2 = "-1,00";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Estado
 */
class TesteEstado : public TesteDominio {
    private:
        Estado *estado;
        const string VALOR_VALIDO = "Previsto";
        const string VALOR_INVALIDO = "Solteiro";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Nome
 */
class TesteNome : public TesteDominio {
    private:
        Nome *nome;
        const string VALOR_VALIDO = "Nicole Gomes";
        const string VALOR_INVALIDO = "Fernando Albuquerque";
        const string VALOR_INVALIDO2 = "Maria clara";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Percentual
 */
class TestePercentual : public TesteDominio {
    private:
        Percentual *percentual;
        const string VALOR_VALIDO = "56";
        const string VALOR_INVALIDO = "101";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Senha
 */
class TesteSenha : public TesteDominio {
    private:
        Senha *senha;
        const string VALOR_VALIDO = "250936";
        const string VALOR_INVALIDO = "250903";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

// --------------
/**
 * @brief Classe para testar o dominio Setor
 */
class TesteSetor : public TesteDominio {
    private:
        Setor *setor;
        const string VALOR_VALIDO = "Quimica e petroquimica";
        const string VALOR_INVALIDO = "Computacao";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};


#endif // TESTES_H_DOM_INCLUDED