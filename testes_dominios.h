#ifndef TESTES_H_DOM_INCLUDED
#define TESTES_H_DOM_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

#include "dominios.h"
#include "entidades.h"

class TesteDominio {
    private:                          
        virtual void setUp();    
        virtual void tearDown();  
        virtual void testarCenarioSucesso();
        virtual void testarCenarioFalha(); 
    protected:
        const string SUCESSO =  "Sucesso!";
        const string FALHA = "Erro.";
        string estado;   
    public:
        int run();
};

class TesteCodigoPagamento : public TesteDominio {
    private:
        CodigoPagamento *codigopagamento;
        const string VALOR_VALIDO = "12345678";
        const string VALOR_INVALIDO = "01234567";
        const string VALOR_INVALIDO = "0123456";
        void setUp();
        void testarValorInvalido();
        void testarValorValido();
        void tearDown();
};


#endif // TESTES_H_DOM_INCLUDED