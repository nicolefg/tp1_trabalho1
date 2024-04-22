#include "testes_dominios.h"

string TesteDominio::run() {
    setUp();
    testarValorInvalido();
    testarValorValido();
    tearDown();
    return situacao;
};

void TesteCodigoPagamento::setUp() {
    codigopagamento = new CodigoPagamento();
    situacao = SUCESSO;
};

void TesteCodigoPagamento::tearDown() {
    delete codigopagamento;
};

void TesteCodigoPagamento::testarValorInvalido() { 
    try {
        codigopagamento->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (codigopagamento->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
    
     try {
        codigopagamento->setValor(VALOR_INVALIDO2);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (codigopagamento->getValor() == VALOR_INVALIDO2) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteCodigoPagamento::testarValorValido() {
    try {
        codigopagamento->setValor(VALOR_VALIDO);
        if (codigopagamento->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteCodigoTitulo::setUp() {
    codigotitulo = new CodigoTitulo();
    situacao = SUCESSO;
};

void TesteCodigoTitulo::tearDown() {
    delete codigotitulo;
};

void TesteCodigoTitulo::testarValorInvalido() { 
    try {
        codigotitulo->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (codigotitulo->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteCodigoTitulo::testarValorValido() {
    try {
        codigotitulo->setValor(VALOR_VALIDO);
        if (codigotitulo->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteCPF::setUp() {
    cpf = new CPF();
    situacao = SUCESSO;
};

void TesteCPF::tearDown() {
    delete cpf;
};

void TesteCPF::testarValorInvalido() { 
    try {
        cpf->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (cpf->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };

    try {
        cpf->setValor(VALOR_INVALIDO2);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (cpf->getValor() == VALOR_INVALIDO2) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteCPF::testarValorValido() {
    try {
        cpf->setValor(VALOR_VALIDO);
        if (cpf->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteData::setUp() {
    data = new Data();
    situacao = SUCESSO;
};

void TesteData::tearDown() {
    delete data;
};

void TesteData::testarValorInvalido() { 
    try {
        data->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (data->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };

    try {
        data->setValor(VALOR_INVALIDO2);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (data->getValor() == VALOR_INVALIDO2) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteData::testarValorValido() {
    try {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteDinheiro::setUp() {
    dinheiro = new Dinheiro();
    situacao = SUCESSO;
};

void TesteDinheiro::tearDown() {
    delete dinheiro;
};

void TesteDinheiro::testarValorInvalido() { 
    try {
        dinheiro->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (dinheiro->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };

    try {
        dinheiro->setValor(VALOR_INVALIDO2);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (dinheiro->getValor() == VALOR_INVALIDO2) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteDinheiro::testarValorValido() {
    try {
        dinheiro->setValor(VALOR_VALIDO);
        if (dinheiro->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteEstado::setUp() {
    estado = new Estado();
    situacao = SUCESSO;
};

void TesteEstado::tearDown() {
    delete estado;
};

void TesteEstado::testarValorInvalido() { 
    try {
        estado->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (estado->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteEstado::testarValorValido() {
    try {
        estado->setValor(VALOR_VALIDO);
        if (estado->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteNome::setUp() {
    nome = new Nome();
    situacao = SUCESSO;
};

void TesteNome::tearDown() {
    delete nome;
};

void TesteNome::testarValorInvalido() { 
    try {
        nome->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (nome->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };

    try {
        nome->setValor(VALOR_INVALIDO2);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (nome->getValor() == VALOR_INVALIDO2) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteNome::testarValorValido() {
    try {
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TestePercentual::setUp() {
    percentual = new Percentual();
    situacao = SUCESSO;
};

void TestePercentual::tearDown() {
    delete percentual;
};

void TestePercentual::testarValorInvalido() { 
    try {
        percentual->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (percentual->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TestePercentual::testarValorValido() {
    try {
        percentual->setValor(VALOR_VALIDO);
        if (percentual->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteSenha::setUp() {
    senha = new Senha();
    situacao = SUCESSO;
};

void TesteSenha::tearDown() {
    delete senha;
};

void TesteSenha::testarValorInvalido() { 
    try {
        senha->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (senha->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteSenha::testarValorValido() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteSetor::setUp() {
    setor = new Setor();
    situacao = SUCESSO;
};

void TesteSetor::tearDown() {
    delete setor;
};

void TesteSetor::testarValorInvalido() { 
    try {
        setor->setValor(VALOR_INVALIDO);
        situacao = FALHA + "Validação burlada.";
    }
    catch(invalid_argument &excecao) {
        if (setor->getValor() == VALOR_INVALIDO) {
            situacao = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteSetor::testarValorValido() {
    try {
        setor->setValor(VALOR_VALIDO);
        if (setor->getValor() != VALOR_VALIDO) {
            situacao = FALHA + "Valor valido não foi setado.";
        };
    }
    catch(invalid_argument &excecao) {
        situacao = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};