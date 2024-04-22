#ifndef TESTES_H_ENT_INCLUDED
#define TESTES_H_ENT_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

#include "dominios.h"
#include "entidades.h"

class TesteEntidade {
    private:                          
        virtual void setUp()= 0;    
        virtual void tearDown()= 0;  
        virtual void testarCenarioSucesso()= 0;
    protected:
        string situacao;   
    public:
        const string SUCESSO =  "Sucesso!";
        const string FALHA = "Erro.";
        string run();
};

class TesteConta : public TesteEntidade {
    const string CPF_VALIDO = "343.539.501-00";
    const string NOME_VALIDO = "Valeria Penna";
    const string SENHA_VALIDA = "586794";  
    Conta *conta;                       
    void setUp();                           
    void tearDown();                        
    void testarCenarioSucesso();            
};

class TesteTitulo : public TesteEntidade {
    const string CODIGOTIT_VALIDO = "LCI00000000";
    const string EMISSOR_VALIDO = "Wagner Nunes";
    const string SETOR_VALIDO = "Energia";
    const string EMISSAO_VALIDA = "01-11-2001";
    const string VENCIMENTO_VALIDO = "01-11-2099";
    const string VALOR_VALIDO = "999999";
    Titulo *titulo;                       
    void setUp();                           
    void tearDown();                        
    void testarCenarioSucesso();            
};

class TestePagamento : public TesteEntidade {
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