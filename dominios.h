#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>
#include <algorithm>
using namespace std;


/**
 * @brief Classe abstrata que representa um dominio generico
 */
class Dominio { //221030858
private:
    virtual void validar(string) = 0;
protected:
    /**
     * @brief Atributo protegido que armazena o valor do dominio
     */
    string valor;
public:
    /**
     * @brief Metodo virtual puro para definir o valor do atributo
     * @param string com o valor a ser atribuido
     */
    virtual void setValor(string) = 0;
    /**
     * @brief Metodo para obter o valor armazenado do atributo
     * @param string com o valor atual armazenado
     */
    string getValor() const;
};

inline string Dominio::getValor() const {
    return valor;
};

// --------------
/**
* @brief Classe CodigoPagamento representando uma string que deve possuir as seguintes regras de formatacao:
*  - Formato XXXXXXXXX;
*  - X como dígito (0-9);
*  - Primeiro digito diferente de zero (1-9).
*/
class CodigoPagamento : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do codigo de pagamento
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe CodigoTitulo representando uma string que deve possuir as seguintes regras de formatacao:
*  - Formato CDBXXXXXXXX, CRAXXXXXXXX, CRIXXXXXXXX, LCAXXXXXXXX, LCIXXXXXXXX ou DEBXXXXXXXX;
*  - X como letra maiuscula (A-Z) ou digito (0-9).
*/
class CodigoTitulo : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do codigo de titulo
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe CPF representando uma string que deve possuir as seguintes regras de formatacao:
*  - Formato XXX.XXX.XXX-CC;
*  - X como digito (0-9);
*  - Pontos usados para separar sequencias de tres digitos;
*  - Hifen usado para separar sequencias de digitos de caracteres de validacao;
*  - CC como caracteres de validacao calculados segundo algoritmo de validacao de CPF.
*/
class CPF : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do CPF
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Data representando uma string que deve possuir as seguintes regras de formatação:
*  - Formato DD-MM-AAAA;
*  - DD como o dia, valendo de 01 a 31;
*  - MM como o mes, valendo de 01 a 12;
*  - AA como o ano, valendo de 2000 a 2100;
*  - Hifens sao usados para separar dias, meses e anos;
*  - Anos bissextos sao considerados.
*/
class Data : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor da data
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Dinheiro representando uma string que deve possuir as seguintes regras de formatação:
*  - Valor de 0,00 a 1.000.000,00;
*  - Pontos podem separar grupos de 3 digitos nos reais;
*  - Virgula deve separar os digitos dos reais dos dois digitos dos centavos.
*/
class Dinheiro : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do dinheiro
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Estado representando uma string que deve possuir os seguintes valores:
*  - Previsto, Liquidado, Inadimplente.
*/
class Estado : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do estado
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Nome representando uma string que deve possuir as seguintes regras de formatacao:
*  - Composto por um ou dois termos;
*  - Cada termo possui de 3 a 10 caracteres;
*  - Cada caracter deve ser uma letra (a-z, A-Z);
*  - Termos sao separados por espaço em branco;
*  - Primeiro caracter de cada termo e letra maiuscula.
*/
class Nome : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do nome
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Dinheiro representando uma string que deve ser:
*  - Valor de 0 a 100;
*/
class Percentual : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do percentual
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Senha representando uma string que deve possuir as seguintes regras de formatacao:
*  - Formato XXXXXX;
*  - X deve ser degito (0-9);
*  - Nao ha digito duplicado;
*  - Primeiro digito deve ser diferente de zero (1-9);
*  - Sequencia de digitos nao pode ser em ordem crescente ou decrescente.
*/
class Senha : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor da senha
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

// --------------
/**
* @brief Classe Estado representando uma string que deve possuir os seguintes valores:
*  - Agricultura, Construcao Civil, Energia, Financas, Imobiliario, Papel e celulose, Pecuria, Quimica e petroquimica, Metalurgia e siderurgia e Mineracao;
*  - Nao sao considerados acentuação e cedilha.
*/
class Setor : public Dominio { //221030858
private:
    void validar(string);
public:
    /**
     * @brief Metodo para definir o valor do setor
     * @param string com o valor a ser definido
     */
    void setValor(string);
};

#endif // DOMINIOS_HPP_INCLUDED