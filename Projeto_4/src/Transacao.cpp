#include "Transacao.h"
#include "ContaBancaria.h"
#include <iostream>
#include <iomanip>

Transacao::Transacao(double valor, std::string data)
    : valor(valor), data(data) {
}

void Transacao::exibirTransacao() const {
    std::cout << "===== Dados da Transacao =====" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor: R$ " << valor << std::endl;
    std::cout << "Data: " << data << std::endl;
}

bool validarTransacao(const ContaBancaria& conta, const Transacao& transacao) {
    if (transacao.valor <= 0) {
        return false;
    }

    if (transacao.valor > conta.saldo) {
        return false;
    }

    return true;
}
