#include <iostream>
#include "ContaBancaria.h"
#include "Transacao.h"

int main() {
    ContaBancaria conta("Ivamilton Junior", "123.456.789-00", 1000.00);

    Transacao transacaoSegura(250.00, "17/05/2026");
    Transacao transacaoInvalida(1500.00, "17/05/2026");

    std::cout << "=== Sistema de Auditoria Bancaria ===" << std::endl;
    std::cout << std::endl;

    conta.exibirDados();

    std::cout << std::endl;
    transacaoSegura.exibirTransacao();

    if (validarTransacao(conta, transacaoSegura)) {
        std::cout << "Resultado da auditoria: Transacao aprovada." << std::endl;
    } else {
        std::cout << "Resultado da auditoria: Transacao recusada." << std::endl;
    }

    std::cout << std::endl;

    transacaoInvalida.exibirTransacao();

    if (validarTransacao(conta, transacaoInvalida)) {
        std::cout << "Resultado da auditoria: Transacao aprovada." << std::endl;
    } else {
        std::cout << "Resultado da auditoria: Transacao recusada." << std::endl;
    }

    return 0;
}
