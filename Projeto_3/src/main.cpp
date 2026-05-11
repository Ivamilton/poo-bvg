#include <iostream>
#include <vector>
#include "Contato.h"

int main() {
    std::vector<Contato> contatos;

    contatos.reserve(3);

    contatos.push_back(Contato("Empresa Alfa", "(85) 99999-1111"));
    contatos.push_back(Contato("Cliente Beta", "(85) 98888-2222"));
    contatos.push_back(Contato("Fornecedor Gama", "(85) 97777-3333"));

    std::cout << "Lista de Contatos B2B" << std::endl;
    std::cout << "---------------------" << std::endl;

    for (Contato& contato : contatos) {
        contato.imprimirNome();
        contato.imprimirTelefone();
        std::cout << "---------------------" << std::endl;
    }

    return 0;
}
