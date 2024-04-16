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

    if (valor.substr(0, 3) != "CDB" && valor.substr(0, 3) != "CRA" && valor.substr(0, 3) != "CRI" && valor.substr(0, 3) != "LCA" && valor.substr(0, 3) != "LCI" && valor.substr(0, 3) != "DEB"){
        throw invalid_argument("Código de título inválido.");
    };
 

    for (int i = 3; i < 11; i++) {
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

void Data::validar(string valor) {
    if ((valor.size() != 10) || (valor[2] != '-' | valor[5] != '-')) {
        throw invalid_argument("Formato inválido.");
    }
    else {
        int dia = stoi(valor.substr(0,2));
        int mes = stoi(valor.substr(3,2));
        int ano = stoi(valor.substr(6,4));

        if (dia < 1 || dia > 31) {
            throw invalid_argument("Dia inválido");
        }
        else if (mes < 1 || mes > 12) {
            throw invalid_argument("Mês inválido");
        }
        else if (ano < 2000 || ano > 2100) {
            throw invalid_argument("Ano inválido");
        }
        else if (mes == 2 && ano % 4 != 0 && dia > 28) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == 2 && dia > 29) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == 4 && dia > 30) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == 6 && dia > 30) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == 9 && dia > 30) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == 11 && dia > 30) {
            throw invalid_argument("Data não existe");
        };
    };
};

void Data::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Dinheiro::validar (string valor) {
    if (valor.size() < 0 || valor.size() > 1000000) {
        throw invalid_argument("Valor inválido.");
    };

    for (int i = 0; i < valor.size(); i++) {
        char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("Valor possui caractere inválido.");
        };
    };
};

void Dinheiro::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Estado::validar(string valor) {
    if (valor != "Previsto" && valor != "Liquidado" && valor != "Inadimplente") {
        throw invalid_argument("Estado inválido.");
    };
};

void Estado::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Nome::validar(string valor) {
    int nomes = 0;
    int char_nome = 0;

    for (char c : valor) {

        if (c == ' ') {
            if (char_nome < 3 || char_nome > 10) {
                throw invalid_argument("Cada palavra deve ter de 3 a 10 caracteres.");
            }
            nomes++;
            char_nome = 0;
        } 

        else if (isalpha(c)) {
            if (char_nome == 0) {
                if (!isupper(c)) {
                    throw invalid_argument("Cada palavra deve começar com letra maiúscula.");
                }
            }
            char_nome++;
        }

        else {
            throw invalid_argument("O nome deve conter apenas letras e espaços.");
        }
    }

    if (char_nome < 3 || char_nome > 10) {
        throw invalid_argument("Cada palavra deve ter de 3 a 10 caracteres.");
    }
    nomes++;

    if (nomes < 1 || nomes > 2) {
        throw invalid_argument("O nome deve conter uma ou duas palavras.");
    }
}

void Nome::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Percentual::validar (string valor) {
    if (valor.size() < 0 || valor.size() > 100) {
        throw invalid_argument("Valor inválido.");
    };

        for (int i = 0; i < valor.size(); i++) {
        char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("Valor possui caractere inválido.");
        };
    };
};

void Percentual::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Senha::validar(string valor) {
    if (valor.size() != 6) {
        throw invalid_argument("Senha não contém 6 caracteres.");
    };

     if (valor[0] == '0') {
        throw invalid_argument("A senha não pode começar com 0.");
    };

    for (int i = 0; i < 6; i++) {
        char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("Senha possui caractere inválido.");
        };

        for (int j = i + 1; j < 6; j++) {
            if (caractere == valor[j]) {
                throw invalid_argument("Senha possui caracteres repetidos.");
            };
        };
    };

    bool crescente = true;
    for (int i = 1; i < 6; i++) {
        if (valor[i] <= valor[i - 1]) {
            crescente = false;
            break;
        }
    }

    bool decrescente = true;
    for (int i = 1; i < 6; i++) {
        if (valor[i] >= valor[i - 1]) {
            decrescente = false;
            break;
        }
    }

    if (crescente || decrescente) {
        throw invalid_argument("A senha não pode estar em ordem crescente ou decrescente.");
    }
};

void Senha::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Setor::validar(string valor) {
    if (valor != "Agricultura" && valor != "Construção civil" && valor != "Energia" && valor != "Finanças" && valor != "Imobiliário" && valor != "Papel e celulose" && valor != "Pecuária" && valor != "Química e petroquímica" && valor != "Metalugia e siderurgia" && valor != "Mineração") {
        throw invalid_argument("Setor inválido.");
    };
};

void Setor::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};