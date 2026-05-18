#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <string>

class ContaBancaria;

class Transacao {
private:
    double valor;
    std::string data;

public:
    Transacao(double valor, std::string data);

    void exibirTransacao() const;

    friend bool validarTransacao(const ContaBancaria& conta, const Transacao& transacao);
};

#endif
