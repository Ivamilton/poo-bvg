# Projeto Avaliativo 3 - Introdução a C++

## Descrição

Este projeto implementa um módulo simples de contatos B2B utilizando C++.

O programa possui uma classe `Contato`, com os atributos privados `nome` e `telefone`.

A classe possui métodos para imprimir o nome e o telefone do contato no console.

Também foi utilizado o container `std::vector` para armazenar dinamicamente os contatos cadastrados, usando `push_back` para inserir os contatos e uma estrutura de repetição para percorrer a lista.

## Estrutura do Projeto

```txt
Projeto_3/
├── docs/
│   └── Contato_UML.png
├── src/
│   ├── Contato.h
│   ├── Contato.cpp
│   └── main.cpp
└── README.md
```

## Como compilar

Dentro da pasta `src`, execute:

```bash
g++ main.cpp Contato.cpp -o crm_app
```

## Como executar

No Linux:

```bash
./crm_app
```

No Windows:

```bash
crm_app.exe
```

## Arquivos

- `Contato.h`: declaração da classe `Contato`.
- `Contato.cpp`: implementação dos métodos da classe.
- `main.cpp`: arquivo principal do programa.
- `Contato_UML.png`: diagrama UML da classe `Contato`.

## Diagrama UML

O diagrama UML da classe está localizado na pasta `docs`.
