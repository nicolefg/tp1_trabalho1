#ifndef TESTES_H_DOM_INCLUDED
#define TESTES_H_DOM_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

#include "dominios.h"
#include "entidades.h"

class TesteDominio {
    private:                          
        virtual void setUp()= 0;    
        virtual void tearDown()= 0;  
        virtual void testarValorValido()= 0;
        virtual void testarValorInvalido()= 0; 
    protected:
        string situacao;   
    public:
        const string SUCESSO =  "Sucesso!";
        const string FALHA = "Erro.";
        string run();
};

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

class TesteDinheiro : public TesteDominio {
    private:
        Dinheiro *dinheiro;
        const string VALOR_VALIDO = "563";
        const string VALOR_INVALIDO = "1000001";
        const string VALOR_INVALIDO2 = "-1";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};

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

class TesteSetor : public TesteDominio {
    private:
        Setor *setor;
        const string VALOR_VALIDO = "Química e petroquímica";
        const string VALOR_INVALIDO = "Computação";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};


#endif // TESTES_H_DOM_INCLUDED