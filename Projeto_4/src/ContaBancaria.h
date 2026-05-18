#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <string>

class Transacao;

class ContaBancaria {
private:
    std::string titular;
    std::string cpf;

protected:
    double saldo;

public:
    ContaBancaria(std::string titular, std::string cpf, double saldoInicial);

    void exibirDados() const;

    friend bool validarTransacao(const ContaBancaria& conta, const Transacao& transacao);
};

#endif
