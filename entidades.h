#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.h"

class Conta {
    private:
        CPF cpf;
        Nome nome;
        Senha senha;
    
    public:
        void setCPF(const CPF&);
        CPF getCPF() const;
        void setNome(const Nome&);
        Nome getNome() const;
        void setSenha(const Senha&);
        Senha getSenha() const;

};

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

class Titulo {
    private:
        CodigoTitulo codigo;
        Nome emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        Dinheiro valor;

    public:
        void setCodigo(const CodigoTitulo&);
        CodigoTitulo getCodigo() const;
        void setEmissor(const Nome&);
        Nome getEmissor() const;
        void setSetor(const Setor&);
        Setor getSetor() const;
        void setEmissao(const Data&);
        Data getEmissao() const;
        void setVencimento(const Data&);
        Data getVencimento() const;
        void setValor(const Dinheiro&);
        Dinheiro getValor() const;
};

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

class Pagamento {
    private: 
        CodigoPagamento codigo;
        Data data;
        Percentual percentual;
        Estado estado;
    public:
        void setCodigo(const CodigoPagamento&);
        CodigoPagamento getCodigo() const;
        void setData(const Data&);
        Data getData() const;
        void setPercentual(const Percentual&);
        Percentual getPercentual() const;
        void setEstado(const Estado&);
        Estado getEstado() const;
};

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