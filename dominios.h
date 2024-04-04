#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

class Dominio {
private:
    virtual void validar(string) = 0;
protected:
    string valor;
public:
    virtual void setValor(string) = 0;
    string getValor() const;
};

inline string Dominio::getValor() const {
    return valor;
};

class CodigoPagamento : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class CodigoTitulo : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class CPF : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Data : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Dinheiro : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Estado : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Nome : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Percentual : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

#endif // DOMINIOS_HPP_INCLUDED