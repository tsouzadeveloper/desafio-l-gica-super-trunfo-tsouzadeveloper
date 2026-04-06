#include <stdio.h>

/*
  SUPER TRUNFO - TEMA 3 - NÍVEL AVENTUREIRO
  Desafio: Interatividade no Super Trunfo
  
  Este programa implementa um sistema interativo completo para o jogo Super Trunfo,
  permitindo ao usuário escolher o atributo de comparação através de um menu dinâmico.
  Utiliza estruturas de decisão aninhadas para lógica complexa de comparação.
 
  Funcionalidades:
  - Menu interativo com estrutura switch-case;
  - Cadastro completo de duas cartas de países;
  - Escolha dinâmica do atributo de comparação;
  - Lógica de comparação com regras específicas por atributo;
  - Tratamento de empates e entradas inválidas;
  - Sistema de densidade demográfica com regra invertida;
 */

int main() {

    // Declaração das variáveis para as duas cartas do Super Trunfo.
    
    char nomePais1[50], nomePais2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    //adicionado - Tema 2 Desafio: nível aventureiro
    float densidadeDemografica1, densidadeDemografica2;
    float pibPerCapita1, pibPerCapita2;
    
    //adicionado Tema 2 Desafio: nivel mestre
    float superpoder1, superpoder2;
    superpoder1 = (int) populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidadeDemografica1);
    superpoder2 = (int) populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidadeDemografica2);

    //adicionado Tema 3 Desafio: nível aventureiro 
    //Interatividade no Super Trunfo 
    int opcaoMenu; // Variáveis de controle 
    int vantagem; // variavel diferencial no resultado da vitoria
    float difere; // variavel diferencial no resultado da vitoria
    
    printf("Insira os dados da Carta 1 \n");
    printf("Nome da Pais: ");
    scanf(" %s", nomePais1);  // recebe dados informando o nome da Pais
    printf("População - número de habitantes da Pais: "); 
    scanf("%lu", &populacao1);   // recebe dados com o número de habitantes da Pais
    printf("Área da Pais em km²: ");
    scanf("%f", &area1);    // recebe dados do Tamanho da A área da Pais em quilômetros quadrados
    printf("PIB: ");
    scanf("%f", &pib1); // recebe dados do valor do PIB. Ogrigatorio receber todos os digitos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);    // recebe dados com a quantidade de pontos turísticos na Pais.

    // Cálculo da Densidade Populacional e PIB per Capita  - Carta 1.
    densidadeDemografica1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1; // PIB em reais

    // Exibição dos dados da carta 1.
    printf("\nCarta 1\n");
    printf("Nome da Pais: %s\n", nomePais1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    //adicionado -  Tema 2 Desafio: nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemografica1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Entrada de dados da carta 2.
    printf("\nInsira os dados da Carta 2 \n");
    printf("Nome da Pais: ");
    scanf(" %s", nomePais2);  // recebe dados informando o nome da Pais.
    printf("População - número de habitantes da Pais: ");
    scanf("%lu", &populacao2);   // recebe dados com o número de habitantes da Pais.
    printf("Área da Pais em km²: ");
    scanf("%f", &area2);    // recebe dados do Tamanho da A área da Pais em quilômetros quadrados.
    printf("PIB: ");
    scanf("%f", &pib2); // recebe dados do valor do PIB. Ogrigatorio receber todos os digitos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);// recebe dados com a quantidade de pontos turísticos na Pais.

     // Cálculo da Densidade Populacional e PIB per Capita - Carta 2.
    densidadeDemografica2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2; // PIB em reais

    // Exibição dos dados da carta 2.
    printf("Nome da Pais: %s\n", nomePais2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemografica2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    //adicionado - Tema 3 Desafio: nível novato e aventureiro
    // Menu Interativo com Switch

    printf(" Escolha o atributo para comparação:\n\n");
    printf(" 1  População (maior população vence)\n");
    printf(" 2  Área (maior área vence)\n");
    printf(" 3  PIB (maior PIB vence)\n");
    printf(" 4  Pontos Turísticos (mais pontos vencem)\n");
    printf(" 5  Densidade Demográfica (MENOR densidade vence)\n");
    
    printf("Digite sua opção: ");
    scanf("%d", &opcaoMenu);
    
    //lógica de comparação com Switch e 
    //estruturas de decisão aninhadas (if-else dentro de if-else)

    switch (opcaoMenu)
    {
    case 1: // Comparação por População
        printf("Atributo: Populacão \n");
        printf("Carta 1: %lu\n", populacao1 );
        printf("Carta 2: %lu\n", populacao2 );
    // Análise estruturas de decisão aninhadas (if-else dentro de if-else)
        if(populacao1 > populacao2){
            printf("Resultado: Carta 1 %s venceu!\n",nomePais1);
            vantagem = populacao1 - populacao2;
            printf("Vantagem: %d habitantes a mais\n", vantagem);
            if (vantagem > 500000) {
                printf(" Diferença, mais de 500 mil habitantes\n");
            } else if (vantagem > 100000) {
                printf(" Diferença, mais de 100 mil habitantes\n");
            } else {
                printf(" Diferença moderada.\n");
            }
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 1 %s venceu!\n",nomePais2);
            vantagem = populacao2 - populacao1;
            printf("Vantagem: %d habitantes a mais\n", vantagem);
            if (vantagem > 500000) {
                printf(" Diferença, mais de 500 mil habitantes\n");
            } else if (vantagem > 100000) {
                printf(" Diferença, mais de 100 mil habitantes\n");
            } else {
                printf(" Diferença moderada.\n");
            }
            } else {
                    printf(" EMPATE! Os países têm o mesmo valor.\n");
                }
        break;
    case 2: // Comparação por Área
        printf("Atributo: Area \n");
        printf("Carta 1:%.2f km²\n", area1 );//Área: %.2f km²\n", area2
        printf("Carta 2:%.2f km²\n", area2 );
// Análise estruturas de decisão aninhadas (if-else dentro de if-else)   
        if(area1 > area2){
            printf("Resultado: Carta 1 %s venceu!\n",nomePais1);
            vantagem = area1 - area2;
            printf("Vantagem: %d km² a mais\n", vantagem);
            if (vantagem > 500000) {
                printf(" Diferença, mais de 500 mil km²\n");
            } else if (vantagem > 100000) {
                printf(" Diferença, mais de 100 mil km²\n");
            } else {
                printf(" Diferença moderada.\n");
            }
        } else if (area2 > area1) {
            printf("Resultado: Carta 1 %s venceu!\n",nomePais2);
            vantagem = area2 - area1;
            printf("Vantagem: %d km² a mais\n", vantagem);
            if (vantagem > 500000) {
                printf(" Diferença, mais de 500 mil km²\n");
            } else if (vantagem > 100000) {
                printf(" Diferença, mais de 100 mil km²\n");
            } else {
                printf(" Diferença moderada.\n");
            }
            } else {
                    printf(" EMPATE! Os países têm o mesmo valor.\n");
                }
        break;    
    case 3:// Estrutura de decisão aninhada para PIB
        printf("Atributo: Area \n");
        printf("Carta 1:%.2f bilhões de reais\n", pib1 );//Área: %.2f km²\n", area2
        printf("Carta 2:%.2f bilhões de reais\n", pib1 );
// Análise estruturas de decisão aninhadas (if-else dentro de if-else)   
        if(pib1 > pib2){
            printf("Resultado: Carta 1 %s venceu!\n",nomePais1);
            difere = pib1 - pib2;
            printf(" Vantagem: PIB com %d Reais a mais\n", difere);
            if (difere > 1000) {
                printf(" Economia com mais de $1 trilhão de diferença!\n");
            } else if (difere > 100) {
                printf(" Economia muito superior, mais de $100 bilhões\n");
            } else {
                printf(" Econômia moderada.\n");
            }
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 1 %s venceu!\n",nomePais2);
            difere = pib2 - pib1;
            printf(" Vantagem: PIB com %d Reais a mais\n", difere);
            if (difere > 1000) {
                printf("Economia com mais de $1 trilhão de diferença!\n");
            } else if (difere > 100) {
                printf(" Economia muito superior, mais de $100 bilhões\n");
            } else {
                printf(" Econômia moderada.\n");
            }
            } else {
                    printf(" EMPATE! Os países têm o mesmo valor.\n");
                }
        break;
    case 4:// Comparação por Pontos Turísticos
        printf("Atributo: Populacão \n");
        printf("Carta 1: %lu\n", pontosTuristicos1 );
        printf("Carta 2: %lu\n", pontosTuristicos2 );
// Análise estruturas de decisão aninhadas (if-else dentro de if-else)
        if(pontosTuristicos1 > pontosTuristicos2){
            printf("Resultado: Carta 1 %s venceu!\n",nomePais1);
            vantagem = pontosTuristicos1 - pontosTuristicos2;
            printf("Vantagem: %d pontos turiticos a mais\n", vantagem);
            if (vantagem > 30) {
                printf(" Destino turístico EXCELENTE\n");
            } else if (vantagem > 20) {
                printf(" Destino turístico atrativo\n");
            } else {
                printf(" Diferença moderada.\n");
            }
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Resultado: Carta 1 %s venceu!\n",nomePais2);
            vantagem = pontosTuristicos2 - pontosTuristicos1;
            printf("Vantagem: %d pontos turiticos a mais\n", vantagem);
            if (vantagem > 30) {
                printf(" Destino turístico EXCELENTE\n");
            } else if (vantagem > 20) {
                printf(" Destino turístico atrativo\n");
            } else {
                printf(" Diferença moderada.\n");
            }
            } else {
                    printf(" EMPATE! Os países têm o mesmo valor.\n");
                }
        break;
    case 5: // Comparação por Densidade Demográfica (REGRA INVERTIDA)
        printf("Atributo: Densidade Demografica \n");
        printf("Carta 1: %.2f hab/km²\n", densidadeDemografica1 );-
        printf("Carta 2: %.2f hab/km²\n", densidadeDemografica2 );
// Análise estruturas de decisão aninhadas (if-else dentro de if-else)
        printf(" ATENÇÃO: Menor densidade vence!\n");
        printf(" (Menor densidade = melhor qualidade de vida)\n");
    
        if(densidadeDemografica1 < densidadeDemografica2){
            printf("Resultado: Carta 1 %s venceu!\n",nomePais1);
            difere = densidadeDemografica1 - densidadeDemografica2;
            printf("Vantagem: %d habitantes a mais\n", difere);
            if (difere < 100) {
                printf(" Densidade EXCELENTE!\n");
            } else if (difere < 200) {
                printf(" Densidade boa\n");
            } else {
                printf(" Densidade moderada.\n");
            }
        } else if (densidadeDemografica2 > densidadeDemografica1) {
            printf("Resultado: Carta 1 %s venceu!\n",nomePais2);
            difere = densidadeDemografica2 - densidadeDemografica1;
            printf("Vantagem: %d habitantes a mais\n", difere);
            if (difere < 100) {
                printf(" Densidade EXCELENTE!\n");
            } else if (difere < 200) {
                printf(" Densidade boa\n");
            } else {
                printf(" Densidade moderada.\n");
            }
            } else {
                    printf(" EMPATE! Os países têm o mesmo valor.\n");
                }
        break;

    default: // Tratamento de entrada inválida

        printf("\n OPÇÃO INVÁLIDA!\n");
        printf(" Por favor, escolha uma opção válida do menu (0-5).\n");
        

        break;
    }
    
    return 0;
}


