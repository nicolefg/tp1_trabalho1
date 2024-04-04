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