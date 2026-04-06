# Super Trunfo - Nível Aventureiro 

Este arquivo implementa o **Nível Aventureiro** do Super Trunfo, introduzindo 

**interatividade avançada** e **lógica de comparação complexa** 

com estruturas de decisão aninhadas.

## 

## Sobre o Desafio

**Nível Aventureiro** representa um salto significativo em complexidade, implementando:



* **Menu interativo** usando estruturas `switch-case`
* **Estruturas de decisão aninhadas** com múltiplos níveis de análise
* **Regras específicas por atributo** incluindo lógica invertida



## Funcionalidades Implementadas

### 

### **Sistema Completo:**

* **Cadastro de Países**: Entrada completa de dados para duas cartas
* **Menu Interativo**: 5 opções com interface visual
* **5 Modalidades de Batalha**: População, Área, PIB, Turismo, Densidade
* **Resultado**: Análise detalhada do vencedor

### 

### &#x20;**Atributos das Cartas:**

|Atributo|Tipo|Critério de Vitória|Exemplo|
|-|-|-|-|
|**Nome do País**|char\[50]`|Identificação|"Brasil", "Chile"|
|**População**|unsigned long int| Maior vence|100.000.000 habitantes|
|**Área**|float| Maior vence|1.000.000 km²|
|**PIB**|float| Maior vence|1.000 bilhões de dólares|
|**Pontos Turísticos**|int| Maior vence|10 pontos|
|**Densidade Demográfica**|float| **MENOR vence**|10.1 hab/km²|

## 

## Sistema de Batalhas

### **Modalidades de Comparação:**

#### 

#### **1 Batalha por População**


// Análise estruturas de decisão aninhadas (if-else dentro de if-else)if(populacao1 > populacao2){

&#x20;           printf("Resultado: Carta 1 %s venceu!\\n",nomePais1);

&#x20;           vantagem = populacao1 - populacao2;

&#x20;           printf("Vantagem: %d habitantes a mais\\n", vantagem);

&#x20;           if (vantagem > 500000) {

&#x20;               printf(" Diferença, mais de 500 mil habitantes\\n");

&#x20;           } else if (vantagem > 100000) {

&#x20;               printf(" Diferença, mais de 100 mil habitantes\\n");

&#x20;           } else {

&#x20;               printf(" Diferença moderada.\\n");

&#x20;           }```

* **Critério**: Maior população vence

#### **2 Batalha por Área** 



if(area1 > area2){

&#x20;           printf("Resultado: Carta 1 %s venceu!\\n",nomePais1);

&#x20;           vantagem = area1 - area2;

&#x20;           printf("Vantagem: %d km² a mais\\n", vantagem);

&#x20;           if (vantagem > 500000) {

&#x20;               printf(" Diferença, mais de 500 mil km²\\n");

&#x20;           } else if (vantagem > 100000) {

&#x20;               printf(" Diferença, mais de 100 mil km²\\n");

&#x20;           } else {

&#x20;               printf(" Diferença moderada.\\n");

&#x20;           }


* **Critério**: Maior área vence

#### **3 Batalha Econômica (PIB)**



if(pib1 > pib2){

&#x20;           printf("Resultado: Carta 1 %s venceu!\\n",nomePais1);

&#x20;           difere = pib1 - pib2;

&#x20;           printf(" Vantagem: PIB com %d Reais a mais\\n", difere);

&#x20;           if (difere > 1000) {

&#x20;               printf(" Economia com mais de $1 trilhão de diferença!\\n");

&#x20;           } else if (difere > 100) {

&#x20;               printf(" Economia muito superior, mais de $100 bilhões\\n");

&#x20;           } else {

&#x20;               printf(" Econômia moderada.\\n");

&#x20;           }



* **Critério**: Maior PIB vence

#### **4 Batalha Turística**



if(pontosTuristicos1 > pontosTuristicos2){

&#x20;           printf("Resultado: Carta 1 %s venceu!\\n",nomePais1);

&#x20;           vantagem = pontosTuristicos1 - pontosTuristicos2;

&#x20;           printf("Vantagem: %d pontos turiticos a mais\\n", vantagem);

&#x20;           if (vantagem > 30) {

&#x20;               printf(" Destino turístico EXCELENTE\\n");

&#x20;           } else if (vantagem > 20) {

&#x20;               printf(" Destino turístico atrativo\\n");

&#x20;           } else {

&#x20;               printf(" Diferença moderada.\\n");

&#x20;           }



* **Critério**: Mais pontos turísticos vencem



#### **5 Batalha por Qualidade de Vida (Densidade)**



&#x20;printf(" ATENÇÃO: Menor densidade vence!\\n");

&#x20;       printf(" (Menor densidade = melhor qualidade de vida)\\n");

&#x20;   

&#x20;       if(densidadeDemografica1 < densidadeDemografica2){

&#x20;           printf("Resultado: Carta 1 %s venceu!\\n",nomePais1);

&#x20;           difere = densidadeDemografica1 - densidadeDemografica2;

&#x20;           printf("Vantagem: %d habitantes a mais\\n", difere);

&#x20;           if (difere < 100) {

&#x20;               printf(" Densidade EXCELENTE!\\n");

&#x20;           } else if (difere < 200) {

&#x20;               printf(" Densidade boa\\n");

&#x20;           } else {

&#x20;               printf(" Densidade moderada.\\n");

&#x20;           }



* **Critério**: **MENOR densidade vence** (regra invertida)



## Menu Interativo

### **Interface do Menu:**

```
╔══════════════════════════════════════════════════════════════╗
║                    MENU DE COMPARAÇÃO                       ║
╚══════════════════════════════════════════════════════════════╝

printf(" Escolha o atributo para comparação:\\n\\n");

printf(" 1  População (maior população vence)\\n");

printf(" 2  Área (maior área vence)\\n");

printf(" 3  PIB (maior PIB vence)\\n");

printf(" 4  Pontos Turísticos (mais pontos vencem)\\n");

printf(" 5  Densidade Demográfica (MENOR densidade vence)\\n");🔧 



**Estrutura Switch-Case:**


switch (opcaoMenu) {
    case 1: // População
        // Lógica complexa de comparação
        break;
    case 2: // Área
        // Análise geográfica aninhada
        break;
    case 3: // PIB
        // Comparação econômica
        break;
    case 4: // Turismo
        // Análise turística
        break;
    case 5: // Densidade (regra invertida)
        // Lógica invertida especial
        break;
    
    default: // Tratamento de erro
        printf("OPÇÃO INVÁLIDA!\\n");
        break;
}


## Exemplos de Uso

### **Exemplo de Entrada:**


CADASTRO DA CARTA 1
Nome do país: Brasil
População (habitantes): 215000000
Área (km²): 8515767.00
PIB (em bilhões de dólares): 2608.00
Pontos turísticos: 20

CADASTRO DA CARTA 2
Nome do país: Chile
População (habitantes): 45500000
Área (km²): 2780400.00
PIB (em bilhões de dólares): 630.00
Pontos turísticos: 15


### **Exemplo de Resultado (Opção 1 - População):**


Atributo: População 

Brasil: 215000000 habitantes
Chile: 45500000 habitantes

Resultado: Carta 1 Brasil venceu!
Vantagem: 169500000 habitantes a mais
Diferença de mais de 1 milhão de habitantes!


## Como Compilar e Executar

### **Compilação:**


# Windows
gcc nivel\_aventureiro.c -o nivel\_aventureiro.exe

# Linux/macOS
gcc nivel\_aventureiro.c -o nivel\_aventureiro

# WSL (Recomendado)
wsl gcc nivel\_aventureiro.c -o nivel\_aventureiro
```

### **Execução:**


# Windows
nivel\_aventureiro.exe

# Linux/macOS/WSL
./nivel\_aventureiro


## Conceitos Técnicos Avançados

### **Estruturas de Decisão Aninhadas:**

```c
// Exemplo de aninhamento de 3 níveis
if (populacao1 > populacao2) {                    // Nível 1: Comparação básica
    int diferenca = populacao1 - populacao2;
    if (diferenca > 1000000) {                     // Nível 2: Categorização
        printf(" Diferença EXPRESSIVA!\\n");
        if (populacao1 > 100000000) {              // Nível 3: Análise adicional
            printf(" Megapopulação mundial!\\n");
        }
    }
}
```

### 

