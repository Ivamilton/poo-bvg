#include "ContaBancaria.h"
#include <iostream>
#include <iomanip>

ContaBancaria::ContaBancaria(std::string titular, std::string cpf, double saldoInicial)
    : titular(titular), cpf(cpf), saldo(saldoInicial) {
}

void ContaBancaria::exibirDados() const {
    std::cout << "===== Dados da Conta =====" << std::endl;
    std::cout << "Titular: " << titular << std::endl;
    std::cout << "CPF: " << cpf << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Saldo atual: R$ " << saldo << std::endl;
}
