#include "dominios.h"

#include <iostream>
using namespace std;

void CodigoPagamento::validar(string valor) {
    if (valor.size() != 8) {
        throw invalid_argument("Código de pagamento não possui 8 números.");
    };

    if (valor[0] == 0) {
        throw invalid_argument("Primeiro digito inválido.");
    };

    for (int i = 0; i < 8; i++) {
        char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("Senha possui caractere inválido.");
        };
    };
};

void CodigoPagamento::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void CodigoTitulo::validar(string valor) {
    if (valor.size() != 11) {
        throw invalid_argument("Código de título não possui 11 dígitos.");
    };

    for (int i = 0; i < 11; i++) {
        char caractere = valor[i];

        if (!((caractere >= '0' & caractere <= '9') |
              (caractere >= 'A' & caractere <= 'Z'))) {
            throw invalid_argument("Código de título possui caractere inválido.");
        };
    };
};

void CodigoTitulo::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};