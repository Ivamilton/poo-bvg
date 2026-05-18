# Projeto Avaliativo 4 - Módulo de Auditoria de Transações Bancárias

## Descrição

Este projeto implementa um módulo simples de auditoria de transações bancárias em C++, utilizando modularização, modificadores de acesso e função amiga.

O sistema possui uma classe `ContaBancaria`, responsável por armazenar os dados básicos de uma conta bancária, e uma classe `Transacao`, responsável por representar uma tentativa de movimentação financeira.

A função amiga `validarTransacao` é utilizada para verificar se uma transação é segura, permitindo o acesso controlado ao saldo da conta e ao valor da transação.

## Conceitos aplicados

- Modularização com arquivos `.h` e `.cpp`;
- Uso dos modificadores de acesso `private`, `protected` e `public`;
- Encapsulamento de dados sensíveis;
- Uso de função amiga `friend`;
- Organização do código em múltiplos arquivos;
- Representação da estrutura por meio de diagrama UML.

## Estrutura do projeto

```txt
Projeto_4/
├── docs/
│   └── Diagrama_Auditoria_UML.png
├── src/
│   ├── ContaBancaria.h
│   ├── ContaBancaria.cpp
│   ├── Transacao.h
│   ├── Transacao.cpp
│   └── main.cpp
└── README.md
```

## Classe ContaBancaria

A classe `ContaBancaria` representa uma conta bancária simples.

Ela possui os atributos privados `titular` e `cpf`, pois são dados sensíveis da conta e não devem ser acessados diretamente fora da classe.

O atributo `saldo` foi definido como `protected`, pois também é uma informação sensível, mas pode ser utilizado futuramente por subclasses, como contas especiais ou contas de investimento.

## Classe Transacao

A classe `Transacao` representa uma tentativa de movimentação bancária.

Ela possui os atributos privados `valor` e `data`, garantindo que essas informações sejam protegidas contra acesso direto externo.

## Função amiga validarTransacao

A função `validarTransacao` foi declarada como amiga das classes `ContaBancaria` e `Transacao`.

Essa função não pertence diretamente a nenhuma das classes, mas recebe como parâmetros um objeto `ContaBancaria` e um objeto `Transacao`.

Por ser uma função amiga, ela consegue acessar o atributo `saldo` da conta e o atributo `valor` da transação para verificar se a operação pode ser aprovada.

## Justificativa do uso de friend

O uso de `friend` foi escolhido porque a função `validarTransacao` representa um módulo externo de auditoria.

Esse módulo precisa verificar informações internas das classes para validar uma transação, mas sem tornar esses dados públicos.

Dessa forma, o sistema mantém o encapsulamento e permite um acesso controlado apenas para a função responsável pela auditoria.

## Justificativa do uso de protected

O atributo `saldo` foi declarado como `protected` para manter a proteção do dado contra acesso externo direto.

Ao mesmo tempo, essa escolha permite que futuras classes derivadas de `ContaBancaria` possam acessar o saldo, caso seja necessário implementar novos tipos de conta.

## Como compilar

Para compilar o projeto, utilize o comando:

```bash
clang++ src/main.cpp src/ContaBancaria.cpp src/Transacao.cpp -o auditoria
```

Ou, se estiver usando `g++`:

```bash
g++ src/main.cpp src/ContaBancaria.cpp src/Transacao.cpp -o auditoria
```

## Como executar

Após compilar, execute:

```bash
./auditoria
```

## Resultado esperado

O programa cria uma conta bancária com saldo inicial de R$ 1000,00 e testa duas transações:

1. Uma transação de R$ 250,00, que deve ser aprovada.
2. Uma transação de R$ 1500,00, que deve ser recusada.

A validação é feita pela função amiga `validarTransacao`, que compara o valor da transação com o saldo disponível da conta.

## Diagrama UML

O diagrama UML está localizado na pasta:

```txt
docs/Diagrama_Auditoria_UML.png
```

Ele representa as classes `ContaBancaria`, `Transacao` e a função amiga `validarTransacao`, destacando os modificadores de acesso e as relações de acesso da função amiga.
