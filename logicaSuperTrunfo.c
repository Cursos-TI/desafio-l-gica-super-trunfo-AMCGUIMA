#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


    // Variaveis das Cartas 1 e 2 criado para armazenar os dados inputados pelo teclado:
    char estado1, estado2;   
    char codigo1[4], codigo2[4]; 
    char nomeCidade1[20], nomeCidade2[20];
    unsigned long int populacao1, populacao2; //Alterado para unsigned long int para desensover o nivel Mestre
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variaveis para calculo do PIB per capita e desindade populacional (Nivel Aventureiro)
    float desidadePopulacional1, desidadePopulacional2;
    float pibPercapita1, pibPercapita2;

    //Variavel Super Poder -- Nivel Mestre
    float superPoder1, superPoder2;
    char Cartas[] ={'2', '1'}; // Variavel auxilar para armazenar o numero das cartas para ser exibido no resutado da comparação
    int comparaPopulacao,  comparaArea, comparaPIB, comparaDensidadePopulacional; //Variaveis para armazenar o resultado das comparações
    int comparaPontosTuristicos, comparaPibpercapita, comparaSuperpoder;  //Variaveis para armazenar o resultado das comparações



    // Coleta de Dados da carta 1 via teclado e função scanf.

    printf("     Preencha os dados da Carta 1:\n\n"); 

    printf("Digita uma letra de 'A' a 'H' (representando um dos oito estados). \nEstado: ");
    scanf(" %c", &estado1);

    printf("\nDigite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03). \nCodigo da Carta: ");
    scanf(" %s", codigo1);

    printf("\nDigite o nome da Cidade: ");
    scanf(" %19s", nomeCidade1);

    printf("\nInforme o numero de habitantes da cidade. \nPopulacao: ");
    scanf(" %ld", &populacao1);

    printf("\nInforme a area da cidade em quilometros quadrados: ");
    scanf(" %f", &area1);

    printf("\nInforme o Produto Interno Bruto da cidade. \nPIB: ");
    scanf(" %f", &pib1);

    printf("\nInforme a quantidade de pontos turiscos na cidade. \nNumero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);


    // Coleta de Dados da carta 2 via teclado e função scanf.

    printf("\n\n   Preencha os dados da carta 2:\n\n");

    printf("Digita uma letra de 'A' a 'H' (representando um dos oito estados). \nEstado: ");
    scanf(" %c", &estado2);

    printf("\nDigite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03). \nCodigo da Carta: ");
    scanf(" %s", codigo2);

    printf("\nDigite o nome da Cidade: ");
    scanf(" %19s", nomeCidade2);

    printf("\nInforme o numero de habitantes da cidade. \nPopulacao: ");
    scanf(" %ld", &populacao2);

    printf("\nInforme a area da cidade em quilometros quadrados: ");
    scanf(" %f", &area2);

    printf("\nInforme o Produto Interno Bruto da cidade. \nPIB: ");
    scanf(" %f", &pib2);

    printf("\nInforme a quantidade de pontos turiscos na cidade. \nNumero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    desidadePopulacional1 = (float)populacao1 / area1;  //Caculo da densidade populacional da Carta 1 

    pibPercapita1 = pib1 / (float)populacao1; //Calculo do PIB per Capita da Carta 1
 
    //Calculando Super Poder da Carta 1
    superPoder1 = ((float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPercapita1);
    superPoder1 += (1/desidadePopulacional1);



    desidadePopulacional2 = (float)populacao2 / area2;  //Caculo da densidade populacional da Carta 2
    
    pibPercapita2 = pib2 / (float)populacao2; //Calculo do PIB per Capita da Carta 2

    //Calculando Super Poder da Carta 2
    superPoder2 = ((float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPercapita2);
    superPoder2 += (1/desidadePopulacional2);
    
    return 0;
}
