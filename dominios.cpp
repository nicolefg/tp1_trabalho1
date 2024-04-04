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

void CPF::validar(string valor) {
    if ((valor.size() != 14) || (valor[3] != '.') || (valor[7] != '.') || (valor[11] != '-')) {
        throw invalid_argument("Formato inválido.");
    };
    
    /*for (int i = 0; i < 3; i++) {
        char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("CPF possui caractere inválido.");
        };
    };

    for (int i = 4; i < 7; i++) {
    char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("CPF possui caractere inválido.");
        };
    };

    for (int i = 8; i < 11; i++) {
    char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("CPF possui caractere inválido.");
        };
    };

    for (int i = 12; i < 14; i++) {
    char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("CPF possui caractere inválido.");
        };
    }; */

    valor.erase(3, 1);
    valor.erase(6, 1);
    valor.erase(9, 1);

    for (int i = 0; i < 9; i++) {
    char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("CPF possui caractere inválido.");
        };
    };    

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (valor[i] - '0') * (10 - i);
    };
    int digito1 = (11 - (soma % 11)) % 11;

    if ((digito1 != (valor[9] - '0')) && (digito1 != (valor[9] - '0' + 10))) {
        throw invalid_argument("CPF inválido.");
    };

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (valor[i] - '0') * (11 - i);
    }
    int digito2 = (11 - (soma % 11)) % 11;

    if ((digito2 != (valor[10] - '0')) && (digito2 != (valor[10] - '0' + 10))) {
        throw invalid_argument("CPF inválido.");
    };
}

void CPF::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};
