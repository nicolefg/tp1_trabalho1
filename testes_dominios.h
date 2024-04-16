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


#endif // TESTES_H_DOM_INCLUDED