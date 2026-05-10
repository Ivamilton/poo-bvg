#include <iostream>
#include "Contato.h"

Contato::Contato(std::string nome, std::string telefone) {
    this->nome = nome;
    this->telefone = telefone;
}

Contato::~Contato() {
    std::cout << "LOG: Contato " << nome << " desalocado da memoria." << std::endl;
}

void Contato::imprimirNome() {
    std::cout << "Nome: " << nome << std::endl;
}

void Contato::imprimirTelefone() {
    std::cout << "Telefone: " << telefone << std::endl;
}
