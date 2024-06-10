#include "dominios.h"
#include <iostream>
using namespace std;

// Implementacao do metodo "validar" da classe CodigoPagamento
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void CodigoPagamento::validar(string valor) {
    // Verifica se o comprimento do valor possui exatamente 8 caracteres
    if (valor.size() != 8) {
        throw invalid_argument("Codigo de pagamento nao possui 8 numeros.");
    };

    // Verifica se todos os caracteres do valor sao digitos
    for (int i = 0; i < valor.size(); i++) {
        char caractere = valor[i];
        if (!(caractere >= '0' && caractere <= '9')) {
            throw invalid_argument("Codigo de pagamento possui caractere invalido.");
        };
    };

    // Verifica se o primeiro digito nao e zero
    int num1 = stoi(valor.substr(0, 1));
    if (num1 == 0) {
        throw invalid_argument("Primeiro digito invalido.");
    };
};

// --------------
// Implementacao do metodo "set" da classe CodigoPagamento
// Define o valor do codigo de pagamento apos validacao
void CodigoPagamento::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe CodigoTitulo
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void CodigoTitulo::validar(string valor) {
    // Verifica se o comprimento do valor possui exatamente 11 caracteres
    if (valor.size() != 11) {
        throw invalid_argument("Codigo de Titulo nao possui 11 digitos.");
    };

    // Verifica se todos os caracteres do valor sao letras maiusculas ou digitos
    for (int i = 0; i < 11; i++) {
        char caractere = valor[i];
        if (!(isupper(caractere) || isdigit(caractere))) {
            throw invalid_argument("Codigo de Titulo possui caractere invalido.");
        };
    };

    // Verifica se o prefixo do valor e valido
    string prefixo = (valor.substr(0, 3));
    if (prefixo != "CDB" && prefixo != "CRA" && prefixo != "CRI" && prefixo != "LCA" && prefixo != "LCI" && prefixo != "DEB") {
        throw invalid_argument("Codigo de Titulo possui prefixo invalido.");
    };
};

// Implementacao do metodo "set" da classe CodigoTitulo
// Define o valor do codigo de titulo apos validacao
void CodigoTitulo::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe CPF
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void CPF::validar(string valor) {
    // Verifica o formato do CPF e XXX.XXX.XXX-XX
    if ((valor.size() != 14) || (valor[3] != '.') || (valor[7] != '.') || (valor[11] != '-')) {
        throw invalid_argument("Formato invalido.");
    };

    // Remove os pontos e o hifen do valor
    valor.erase(3, 1);
    valor.erase(6, 1);
    valor.erase(9, 1);

    // Verifica se todos os caracteres restantes sao digitos
    for (int i = 0; i < 9; i++) {
        char caractere = valor[i];
        if (!(caractere >= '0' && caractere <= '9')) {
            throw invalid_argument("CPF possui caractere invalido.");
        };
    };

    // Calcula e verefica o primeiro caractere de validacao
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (valor[i] - '0') * (10 - i);
    };
    int digito1 = (11 - (soma % 11)) % 11;
    if ((digito1 != (valor[9] - '0')) && (digito1 != (valor[9] - '0' + 10))) {
        throw invalid_argument("CPF invalido.");
    };

    // Calcula e verifica o segundo caractere de validacao
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (valor[i] - '0') * (11 - i);
    }
    int digito2 = (11 - (soma % 11)) % 11;
    if ((digito2 != (valor[10] - '0')) && (digito2 != (valor[10] - '0' + 10))) {
        throw invalid_argument("CPF invalido.");
    };
}

// Implementacao do metodo "set" da classe CPF
// Define o valor do CPF apos validacao
void CPF::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Data
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void Data::validar(string valor) {
    // Verifica se o comprimento do valor possui exatamente 10 caracteres
    if ((valor.size() != 10)) {
        throw invalid_argument("Formato invalido.");
    };

    // Verifica se o formato da data e DD-MM-AAAA
    string hifen1 = valor.substr(2, 1);
    string hifen2 = valor.substr(5, 1);
    if (hifen1 != "-" || hifen2 != "-") {
        throw invalid_argument("Formato invalido.");
    } else {
        // Extrai dia, mes e ano da string e verifica sua validade
        int dia = stoi(valor.substr(0, 2));
        int mes = stoi(valor.substr(3, 2));
        int ano = stoi(valor.substr(6, 4));
        if (dia < 1 || dia > 31) {
            throw invalid_argument("Dia invalido");
        } else if (mes < 1 || mes > 12) {
            throw invalid_argument("Mes invalido");
        } else if (ano < 2000 || ano > 2100) {
            throw invalid_argument("Ano invalido");
        } else if (mes == 2 && ano % 4 != 0 && dia > 28) {
            throw invalid_argument("Data nao existe");
        } else if (mes == 2 && dia > 29) {
            throw invalid_argument("Data nao existe");
        } else if (mes == 4 && dia > 30) {
            throw invalid_argument("Data nao existe");
        } else if (mes == 6 && dia > 30) {
            throw invalid_argument("Data nao existe");
        } else if (mes == 9 && dia > 30) {
            throw invalid_argument("Data nao existe");
        } else if (mes == 11 && dia > 30) {
            throw invalid_argument("Data nao existe");
        };
    };
};

// Implementacao do metodo "set" da classe Data
// Define o valor da data apos validacao
void Data::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Dinheiro
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void Dinheiro::validar(string valor) {
    // Remove pontos do valor
    valor.erase(remove(valor.begin(), valor.end(), '.'), valor.end());

    // Verifica se o comprimento do valor esta dentro dos limites
    if (valor.size() < 4 || valor.size() > 14) {
        throw invalid_argument("Formato invalido.");
    }

    // Verifica se ha exatamente uma virgula no valor
    if (valor.find(',') == string::npos || valor.find(',') != valor.rfind(',')) {
        throw invalid_argument("Formato invalido.");
    }

    // Separa a parte inteira e os centavos
    int virgula = valor.find(',');
    string reais = valor.substr(0, virgula);
    string centavos = valor.substr(virgula + 1);

    // Verifica se as partes tem comprimento adequado
    if (reais.size() < 1 || reais.size() > 9 || centavos.size() != 2) {
        throw invalid_argument("Real ou centavo de valor invalido.");
    }

    // Verifica se a parte inteira e os centavos sao compostos apenas por digitos
    for (char c : reais) {
        if (!isdigit(c)) {
            throw invalid_argument("Real possui caracter invalido.");
        }
    }
    for (char c : centavos) {
        if (!isdigit(c)) {
            throw invalid_argument("Centavo possui carater invalido.");
        }
    }

    // Converte o valor para float e verifica se esta dentro do intervalo permitido
    float num = std::stof(valor);
    if (num < 0.0 || num > 1000000.0) {
        throw invalid_argument("Valor invalido.");
    }
}

// Implementacao do metodo "set" da classe Dinheiro
// Define o valor do dinheiro apos validacao
void Dinheiro::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Estado
// Verifica se o valor fornecido esta entre os estados permitidos
void Estado::validar(string valor) {
    // Verifica se o valor e um dos estados permitidos
    if (valor != "Previsto" && valor != "Liquidado" && valor != "Inadimplente") {
        throw invalid_argument("Estado invalido.");
    };
};

// Implementacao do metodo "set" da classe Estado
// Define o valor do estado apos validacao
void Estado::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Nome
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void Nome::validar(string valor) {
    int nomes = 0; // Contador de palavras
    int char_nome = 0; // Contador de caracteres na palavra atual

    for (char c : valor) {
        if (c == ' ') {
            // Verifica se a palavra atual tem entre 3 e 10 caracteres
            if (char_nome < 3 || char_nome > 10) {
                throw invalid_argument("Cada palavra deve ter de 3 a 10 caracteres.");
            }
            nomes++; // Incrementa o contador de palavras
            char_nome = 0; // Reseta o contador de caracteres para a proxima palavra
        } else if (isalpha(c)) {
            // Verifica se a primeira letra da palavra e maiuscula
            if (char_nome == 0) {
                if (!isupper(c)) {
                    throw invalid_argument("Cada palavra deve comecar com letra maiuscula.");
                }
            }
            char_nome++; // Incrementa o contador de caracteres
        } else {
            // Verifica se o caractere e valido.
            throw invalid_argument("O nome deve conter apenas letras e espacos.");
        }
    }

    // Verifica a ultima palavra
    if (char_nome < 3 || char_nome > 10) {
        throw invalid_argument("Cada palavra deve ter de 3 a 10 caracteres.");
    }
    nomes++; // Incrementa o contador de palavras

    // Verifica se o nome contem uma ou duas palavras
    if (nomes < 1 || nomes > 2) {
        throw invalid_argument("O nome deve conter uma ou duas palavras.");
    }
}

// Implementacao do metodo "set" da classe Nome
// Define o valor do nome apos validacao
void Nome::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Percentual
// Verifica se o valor fornecido atende aos requisitos de intervalo
void Percentual::validar(string valor) {
    // Converte o valor para inteiro e verifica se esta no intervalo de 0 a 100
    int num = stoi(valor.substr(0, valor.size()));
    if (num < 0 || num > 100) {
        throw invalid_argument("Valor invalido.");
    };
};

// Implementacao do metodo "set" da classe Percentual
// Define o valor do percentual apos validacao
void Percentual::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Senha
// Verifica se o valor fornecido atende aos requisitos de formato e conteudo
void Senha::validar(string valor) {
    // Verifica se a senha tem exatamente 6 caracteres
    if (valor.size() != 6) {
        throw invalid_argument("Senha nao contem 6 caracteres.");
    };

    // Verifica se o primeiro caractere nao e zero
    if (valor[0] == '0') {
        throw invalid_argument("A senha nao pode comecar com 0.");
    };

    // Verifica se todos os caracteres sao digitos e se nao ha digitos repetidos
    for (int i = 0; i < 6; i++) {
        char caractere = valor[i];
        if (!(caractere >= '0' && caractere <= '9')) {
            throw invalid_argument("Senha possui caractere invalido.");
        };

        for (int j = i + 1; j < 6; j++) {
            if (caractere == valor[j]) {
                throw invalid_argument("Senha possui caracteres repetidos.");
            };
        };
    };

    // Verifica se a senha nao esta em ordem crescente
    bool crescente = true;
    for (int i = 1; i < 6; i++) {
        if (valor[i] <= valor[i - 1]) {
            crescente = false;
            break;
        }
    }

    // Verifica se a senha nao esta em ordem decrescente
    bool decrescente = true;
    for (int i = 1; i < 6; i++) {
        if (valor[i] >= valor[i - 1]) {
            decrescente = false;
            break;
        }
    }

    // Se a senha esta em ordem crescente ou decrescente, lança excecao
    if (crescente || decrescente) {
        throw invalid_argument("A senha nao pode estar em ordem crescente ou decrescente.");
    }
};

// Implementacao do metodo "set" da classe Senha
// Define o valor da senha apos validacao
void Senha::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};

// --------------
// Implementacao do metodo "validar" da classe Setor
// Verifica se o valor fornecido esta entre os setores permitidos
void Setor::validar(string valor) {
    // Verifica se o valor e um dos setores permitidos
    if (valor != "Agricultura" && valor != "Construcao civil" && valor != "Energia" && valor != "Financas" && valor != "Imobiliario" && valor != "Papel e celulose" && valor != "Pecuaria" && valor != "Quimica e petroquimica" && valor != "Metalugia e siderurgia" && valor != "Mineracao") {
        throw invalid_argument("Setor invalido.");
    };
};

// Implementacao do metodo "set" da classe Setor
// Define o valor do setor apos validacao
void Setor::setValor(string valor) {
    validar(valor); // Chama o metodo validar para verificar o valor
    this->valor = valor; // Atribui o valor ao atributo da classe
};