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

inline void Titulo::setVencimento(const Data &vecimento){
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


#endif // ENTIDADES_HPP_INCLUDED