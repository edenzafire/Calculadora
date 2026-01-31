# 🧮 C-Calc Engine: Aritmética de Baixo Nível

![C](https://img.shields.io/badge/language-C-blue.svg)
![Status](https://img.shields.io/badge/status-Legacy%20Refactor-success.svg)
![Paradigm](https://img.shields.io/badge/paradigm-procedural-orange.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

Este repositório contém uma implementação robusta de uma calculadora científica básica em linguagem C. O projeto foi desenvolvido com foco em fundamentos de computação, explorando precisão de ponto flutuante e controle de fluxo por desvio condicional.

## 🔍 Code Walkthrough: O Ciclo de Vida da Execução

A arquitetura do programa segue o modelo clássico de processamento de dados (Input-Process-Output), garantindo previsibilidade e clareza:

1.  **Ingestão de Dados (Input):** Utiliza o buffer de entrada padrão via `scanf`. Os dados são tipados como `double` para suportar precisão decimal estendida (64 bits).
2.  **Direcionamento de Fluxo (Control Logic):** O sistema avalia o token da operação através de um bloco `switch-case`. Esta é uma escolha performática, com complexidade de tempo constante $O(1)$, superior a encadeamentos de `if-else` em termos de legibilidade e otimização de compilação.
3.  **Processamento Aritmético:** As operações variam de aritmética simples a funções da biblioteca `math.h` (como `pow`), lidando com potências e radiciação.
4.  **Exibição (Output):** O resultado é formatado para duas casas decimais (`%.2lf`), aplicando arredondamento padrão para a interface do usuário.



---

## 🧠 Alfabetização Algorítmica (Foundations)

O código demonstra o domínio dos pilares fundamentais da ciência da computação:

* **Tipagem Forte:** O uso de `double` em vez de `float` permite uma mantissa maior, essencial para minimizar erros de arredondamento em cálculos de radiciação.
* **Tratamento de Exceções Lógicas:** O código antecipa falhas matemáticas críticas, como a **Divisão por Zero** e **Raiz de Números Negativos** em índices reais, utilizando condicionais preventivas.
* **Aritmética de Ponto Flutuante:** Note a expressão `1.0 / num2`. O uso do literal decimal `1.0` é uma técnica para garantir que o compilador realize a divisão em ponto flutuante, evitando o truncamento de inteiros.

---

## 🛠 Deep Dive Técnico: Memória e Performance

### 1. Gerenciamento na Stack
Todas as variáveis deste projeto são alocadas na **Stack (Pilha)**. 
* **Vantagem:** Acesso ultra-rápido e desalocação automática assim que a função `main` retorna. 
* **Eficiência:** O footprint de memória é desprezível, ideal para sistemas embarcados ou de baixo recurso.

### 2. Segurança de Dados
* **Prevenção de Buffer Overflow:** Por lidar estritamente com tipos primitivos numéricos e não com cadeias de caracteres (strings) sem limite, o código é inerentemente protegido contra transbordamentos de buffer comuns em C.
* **Análise de Risco:** Um aprimoramento sênior seria a validação do retorno do `scanf`, garantindo que caracteres não-numéricos não poluam o fluxo de execução.

---

## 🚀 Roadmap de Evolução (Refatoração Sênior)

Como este código reflete uma fase inicial de aprendizado, hoje ele poderia evoluir para:

* **Modularização:** Encapsular as operações em uma biblioteca própria (`calc.h` / `calc.c`).
* **Ponteiros:** Passagem de parâmetros por referência para reduzir o uso de memória em estruturas maiores.
* **Run-Loop:** Implementação de um laço `while(1)` com condição de saída para permitir cálculos contínuos.
* **Structs:** Agrupamento de dados (`struct Calculadora`) para melhor organização do estado.

---

## 💻 Como Compilar e Executar

Para compilar o código, utilize um compilador C (GCC ou Clang) e lembre-se de linkar a biblioteca matemática:

```bash
# Compilação
gcc calculadora.c -o calculadora -lm

# Execução
./calculadora
