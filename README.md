# Calculadora em C
## Descrição
  Este é um projeto simples de uma calculadora em linguagem C que realiza diversas operações matemáticas básicas, como:

* Adição
* Subtração
* Multiplicação
* Divisão
* Exponenciação (potência)
* Radiciação (raiz)

Este projeto tem como objetivo consolidar conceitos de programação em C e introduzir o uso de bibliotecas matemáticas.

## Funcionalidades

A calculadora oferece as seguintes operações:

1 - Adição: Soma dois números.
2 - Subtração: Subtrai o segundo número do primeiro.
3 - Multiplicação: Multiplica dois números.
4 - Divisão: Divide o primeiro número pelo segundo (verificação de divisão por zero inclusa).
5 - Exponencial: Calcula o primeiro número elevado ao segundo número.
6 - Radiciação: Calcula a raiz do primeiro número com base no índice fornecido (segundo número). 


## Como Executar
 
 # Pré-requisitos
 
Um compilador C, como o gcc.
A biblioteca matemática padrão (math.h) deve estar disponível no ambiente.

## Compilação
Para compilar o programa, use o seguinte comando:

bash
gcc calculadora.c -o calculadora -lm

O argumento -lm é necessário para linkar a biblioteca matemática.

## Execução
Após a compilação, você pode executar o programa com:

bash
./calculadora

Você será solicitado a inserir dois números e selecionar uma operação a ser realizada.

## Estrutura do Código

calculadora.c: Contém o código-fonte do programa, incluindo a lógica de cada operação.

## Melhorias Futuras
Adicionar suporte para operações mais avançadas (ex: logaritmos).

Melhorar a interface de entrada e saída com verificações mais robustas de erro.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir um issue ou enviar um pull request.

Licença
Este projeto está licenciado sob a MIT License.


