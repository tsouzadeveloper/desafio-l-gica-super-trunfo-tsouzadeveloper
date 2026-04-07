## 🃏 Super Trunfo - Nível Mestre (Países)

Este projeto é um simulador do jogo Super Trunfo, desenvolvido em linguagem C. Ele representa o nível "Mestre" do desafio, focando em lógica de comparação avançada, menus dinâmicos e tratamento de atributos específicos.
## 🚀 Funcionalidades

* Cadastro de Cartas: Armazena dados de diferentes países (Nome, População, Área, PIB, Pontos Turísticos).
* Cálculos Automáticos: Calcula a Densidade Demográfica e o PIB per Capita de cada carta.
* Menu Interativo: Sistema de escolha de atributos utilizando switch-case.
* Seleção Inteligente: O menu do segundo atributo oculta automaticamente a primeira opção escolhida.
* Lógica de Comparação:
* Atributos comuns: Vence o maior valor.
   * Densidade Demográfica: Vence o menor valor.
* Veredito Final: Soma dos atributos escolhidos para determinar o vencedor, utilizando operadores ternários para uma lógica enxuta.

## 🛠️ Tecnologias Utilizadas

* Linguagem C
* Bibliotecas padrão: stdio.h

## 📖 Como Executar

   1. Certifique-se de ter um compilador de C instalado (GCC, Clang, etc.).
   2. Clone ou baixe o arquivo do código.
   3. Compile o código no terminal:
   
   gcc super_trunfo_mestre.c -o super_trunfo
   
   4. Execute o programa:
   
   ./super_trunfo
   
   
## 🎮 Regras do Jogo no Código

   1. O usuário escolhe o primeiro atributo para comparação.
   2. O usuário escolhe o segundo atributo (não pode ser igual ao primeiro).
   3. O programa compara as duas cartas (Brasil vs Chile no exemplo atual).
   4. Caso o atributo seja Densidade, o menor valor ganha o ponto da rodada.
   5. A soma total define o país vencedor ou se houve empate.

## 🧠 Conceitos Aplicados

* switch-case para menus.
* if-else aninhado para validação de entradas.
* Operadores Ternários para decisões rápidas de vitória/derrota.
* sprintf para manipulação de strings de nomes de atributos.

------------------------------
Desenvolvido como parte do desafio de lógica de programação em C.


