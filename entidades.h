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


#endif // ENTIDADES_HPP_INCLUDED