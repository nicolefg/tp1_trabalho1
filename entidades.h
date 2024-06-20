#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.h"

/**
* @brief Classe Entidade Conta, cujos atributos sao:
*  - cpf, objeto da classe CPF;
*  - nome, objeto da classe Nome;
*  - senha, objeto da classe Senha.
*/
class Conta { //222001449
    private:
        CPF cpf;
        Nome nome;
        Senha senha;
    
    public:
    /**
     * @brief Metodo para atribuir o CPF
     * @param string com o valor do CPF a ser atribuido
     */
        void setCPF(const CPF&);
        /**
     * @brief Metodo para obter o valor do CPF
     * @return String com o valor do CPF
     */
        CPF getCPF() const;

    /**
     * @brief Metodo para atribuir o nome
     * @param string com o valor do nome a ser atribuido
     */    
        void setNome(const Nome&);
    /**
     * @brief Metodo para obter o valor do nome
     * @return String com o valor do nome
     */
        Nome getNome() const;

    /**
     * @brief Metodo para atribuir a senha
     * @param string com o valor da senha a ser atribuido
     */
        void setSenha(const Senha&);
    /**
     * @brief Metodo para obter o valor da senha
     * @return String com o valor da senha
     */
        Senha getSenha() const;

};

// Metodos modificadores e acessores da entidade Conta
inline void Conta::setCPF(const CPF &cpf){
    this->cpf = cpf;
};

inline CPF Conta::getCPF() const {
    return cpf;
};

inline void Conta::setNome(const Nome &nome){
    this->nome = nome;
};

inline Nome Conta::getNome() const {
    return nome;
};

inline void Conta::setSenha(const Senha &senha){
    this->senha = senha;
};

inline Senha Conta::getSenha() const {
    return senha;
};

// --------------
/**
* @brief Classe Entidade Titulo, cujos atributos sao:
*  - codigo, objeto da classe CodigoTitulo;
*  - nome, objeto da classe Nome;
*  - setor, objeto da classe Setor;
*  - emissao, objeto da classe Data;
*  - vencimento, objeto da classe Data;
*  - valor, objeto da classe Dinheiro;
*/
class Titulo { //222001449
    private:
        CodigoTitulo codigo;
        Nome emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        Dinheiro valor;

    public:
        /**
         * @brief Metodo para atribuir o codigo
         * @param string com o valor do codigo a ser atribuido
         */
        void setCodigo(const CodigoTitulo&);
        /**
         * @brief Metodo para obter o valor do codigo
         * @return String com o valor do codigo
         */
        CodigoTitulo getCodigo() const;

        /**
         * @brief Metodo para atribuir o emissor
         * @param string com o valor do emissor a ser atribuido
         */
        void setEmissor(const Nome&);
        /**
         * @brief Metodo para obter o valor do emissor
         * @return String com o valor do emissor
         */
        Nome getEmissor() const;

        /**
         * @brief Metodo para atribuir o setor
         * @param string com o valor do setor a ser atribuido
         */
        void setSetor(const Setor&);
        /**
         * @brief Metodo para obter o valor do setor
         * @return String com o valor do setor
         */
        Setor getSetor() const;

        /**
         * @brief Metodo para atribuir a emissao
         * @param string com o valor da emissa a ser atribuida
         */
        void setEmissao(const Data&);
        /**
         * @brief Metodo para obter o valor da emissao
         * @return String com o valor da emissao
         */
        Data getEmissao() const;

        /**
         * @brief Metodo para atribuir o vencimento
         * @param string com o valor do vencimento a ser atribuido
         */
        void setVencimento(const Data&);
        /**
         * @brief Metodo para obter o valor do vencimento
         * @return String com o valor do vencimento
         */
        Data getVencimento() const;

        /**
         * @brief Metodo para atribuir o valor
         * @param string com o valor do valor a ser atribuido
         */
        void setValor(const Dinheiro&);
        /**
         * @brief Metodo para obter o valor do dinheiro
         * @return String com o valor do dinheiro
         */
        Dinheiro getValor() const;
};

// Metodos modificadores e acessores da entidade Titulo
inline void Titulo::setCodigo(const CodigoTitulo &codigo){
    this->codigo = codigo;
};

inline CodigoTitulo Titulo::getCodigo() const {
    return codigo;
};

inline void Titulo::setEmissor(const Nome &emissor){
    this->emissor = emissor;
};

inline Nome Titulo::getEmissor() const {
    return emissor;
};

inline void Titulo::setSetor(const Setor &setor){
    this->setor = setor;
};

inline Setor Titulo::getSetor() const {
    return setor;
};

inline void Titulo::setEmissao(const Data &emissao){
    this->emissao = emissao;
};

inline Data Titulo::getEmissao() const {
    return emissao;
};

inline void Titulo::setVencimento(const Data &vencimento){
    this->vencimento = vencimento;
};

inline Data Titulo::getVencimento() const {
    return vencimento;
};

inline void Titulo::setValor(const Dinheiro &valor){
    this->valor = valor;
};

inline Dinheiro Titulo::getValor() const {
    return valor;
};

// --------------
/**
* @brief Classe Entidade Pagamento, cujos atributos sao:
*  - codigo, objeto da classe CodigoPagamento;
*  - data, objeto da classe Data;
*  - percentual, objeto da classe Percentual;
*  - estado, objeto da classe Estado;
*/
class Pagamento { //222001449
    private: 
        CodigoPagamento codigo;
        Data data;
        Percentual percentual;
        Estado estado;
    public:
        /**
         * @brief Metodo para atribuir o codigo
         * @param string com o valor do codigo a ser atribuido
         */
        void setCodigo(const CodigoPagamento&);
        /**
         * @brief Metodo para obter o valor do codigo
         * @return String com o valor do codigo
         */
        CodigoPagamento getCodigo() const;

        /**
         * @brief Metodo para atribuir a data
         * @param string com o valor da data a ser atribuido
         */
        void setData(const Data&);
        /**
         * @brief Metodo para obter o valor da data
         * @return String com o valor da data
         */
        Data getData() const;

        /**
         * @brief Metodo para atribuir o percentual
         * @param string com o valor do percentual a ser atribuido
         */
        void setPercentual(const Percentual&);
        /**
         * @brief Metodo para obter o valor do percentual
         * @return String com o valor do percentual
         */
        Percentual getPercentual() const;

        /**
         * @brief Metodo para atribuir o estado
         * @param string com o valor do estado a ser atribuido
         */
        void setEstado(const Estado&);
        /**
         * @brief Metodo para obter o valor do estado
         * @return String com o valor do estado
         */
        Estado getEstado() const;
};

// Metodos modificadores e acessores da entidade Pagamento
inline void Pagamento::setCodigo(const CodigoPagamento &codigo){
    this->codigo = codigo;
};

inline CodigoPagamento Pagamento::getCodigo() const {
    return codigo;
};

inline void Pagamento::setData(const Data &data){
    this->data = data;
};

inline Data Pagamento::getData() const {
    return data;
};

inline void Pagamento::setPercentual(const Percentual &percentual){
    this->percentual = percentual;
};

inline Percentual Pagamento::getPercentual() const {
    return percentual;
};

inline void Pagamento::setEstado(const Estado &estado){
    this->estado = estado;
};

inline Estado Pagamento::getEstado() const {
    return estado;
};


#endif // ENTIDADES_HPP_INCLUDED