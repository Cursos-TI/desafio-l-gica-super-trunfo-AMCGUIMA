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
    int resultado1, resultado2; 
    float somaAtributos1, somaAtributos2;   
    
    int atributo1, atributo2; // Variavel auxiliar para dinamica do menu

/*

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

    
    printf("\n\n   Dados das Cartas 1 e 2.");
    // Impressao dos dados da carta 1
    printf("\n\nCarta 1:");
    printf("\nEstado: %c", estado1); 
    printf("\nCodigo: %s", codigo1); 
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulacao: %ld", populacao1);
    printf("\nArea: %.2f km2", area1);
    printf("\nPIB: %.2f bilhoes de reais", pib1);
    printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos1);

    desidadePopulacional1 = (float)populacao1 / area1;  //Caculo da densidade populacioal da Carta 1

    printf("\nDensidade Populacional: %.2f hab/km2", desidadePopulacional1); 

    pibPercapita1 = pib1 / (float)populacao1; //Calculo do PIB per Capita da Carta 1

    printf("\nPIB per Capita: %.2f reais", pibPercapita1);

    //Calculando Super Poder da Carta 1
    superPoder1 = ((float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPercapita1);
    superPoder1 += (1/desidadePopulacional1);

    printf("\nSuper Poder: %.2f ", superPoder1);


    // Impressao dos dados da carta 2
    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulacao: %ld", populacao2);
    printf("\nArea: %.2f km2", area2); 
    printf("\nPIB: %.2f bilhoes de reais", pib2);
    printf("\nNumero de Pontos Turisticos: %d", pontosTuristicos2);

    desidadePopulacional2 = (float)populacao2 / area2;  //Caculo da densidade populacioal da Carta 2

    printf("\nDensidade Populacional: %.2f hab/km2", desidadePopulacional2); 

    pibPercapita2 = pib2 / (float)populacao2; //Calculo do PIB per Capita da Carta 2

    printf("\nPIB per Capita: %.2f reais", pibPercapita2);

    //Calculando Super Poder da Carta 2
    superPoder2 = ((float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPercapita2);
    superPoder2 += (1/desidadePopulacional2);

    printf("\nSuper Poder: %.2f ", superPoder2);
*/
    //----------Inicio do Menu dinamico-----------//

    atributo1 =4;
    atributo2 = 2;
    
    strcpy(nomeCidade1, "TIETE");
    strcpy(nomeCidade2, "TATUI");
    populacao1 =376;
    populacao2 = 376;
    area1 = 404.39;
    area2 = 2324.88;
    pib1 = 59908.52;
    pib2 =5100000.00;
    pontosTuristicos1 = 34;
    pontosTuristicos2 = 34;
    desidadePopulacional1 = (float)populacao1 / area1;  //Caculo da densidade populacioal da Carta 1
    desidadePopulacional2 = (float)populacao2 / area2;  //Caculo da densidade populacioal da Carta 2
    pibPercapita1 = pib1 / (float)populacao1; //Calculo do PIB per Capita da Carta 1
    pibPercapita2 = pib2 / (float)populacao2; //Calculo do PIB per Capita da Carta 2
    
    superPoder1 = ((float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPercapita1);
    superPoder1 += (1/desidadePopulacional1);
    superPoder2 = ((float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPercapita2);
    superPoder2 += (1/desidadePopulacional2);

    


    printf("\n\n\nEscolha dois atributos para iniciar. \n");
    printf("\n1 - Populacao");
    printf("\n2 - Area");
    printf("\n3 - PIB");
    printf("\n4 - Pontos Turisticos");
    printf("\n5 - Densidade Populacional");
    printf("\n6 - PIB per Capita");
    printf("\n7 - Super Poder");

    printf("\n\n  Atributo 1: ");
    
    if(scanf("%d", &atributo1) == 1){
        if(atributo1 < 1 || atributo1 > 7){
            printf("\n\n   Atributo incorreto. Inicie novamente.");
            return 0;
        } 
    } 


    printf("\n\nEscolha o segundo atributo.");

    switch(atributo1){
        case 1:
             printf("\n1 - Area");
             printf("\n2 - PIB");
             printf("\n3 - Pontos Turisticos");
             printf("\n4 - Densidade Populacional");
             printf("\n5 - PIB per Capita");
             printf("\n6 - Super Poder");
             if(populacao1 == populacao2)
             {
                resultado1 = 2; //VALOR PARA EMPATE 

             }else resultado1 = populacao1 > populacao2 ? 1 : 0;

             somaAtributos1 = (float)populacao1;
             somaAtributos2 = (float)populacao2;
             break;
        case 2:
             printf("\n1 - Populacao");
             printf("\n2 - PIB");
             printf("\n3 - Pontos Turisticos");
             printf("\n4 - Densidade Populacional");
             printf("\n5 - PIB per Capita");
             printf("\n6 - Super Poder");
             if(area1 == area1)
             {
                resultado1 = 2; //VALOR PARA EMPATE 
                
             }else resultado1 = area1 > area2 ? 1 : 0;

             somaAtributos1 = area1;
             somaAtributos2 = area2;
             break;
        case 3:
             printf("\n1 - Populacao");
             printf("\n2 - Area");
             printf("\n3 - Pontos Turisticos");
             printf("\n4 - Densidade Populacional");
             printf("\n5 - PIB per Capita");
             printf("\n6 - Super Poder");
             if(pib1 == pib2)
             {
                resultado1 = 2; //VALOR PARA EMPATE 
                
             }else resultado1 = pib1 > pib2 ? 1 : 0;
             somaAtributos1 = pib1;
             somaAtributos2 = pib2;
             break;
        case 4:
             printf("\n1 - Populacao");
             printf("\n2 - Area");
             printf("\n3 - PIB");
             printf("\n4 - Densidade Populacional");
             printf("\n5 - PIB per Capita");
             printf("\n6 - Super Poder");
             if(pontosTuristicos1 == pontosTuristicos2)
             {
                resultado1 = 2; //VALOR PARA EMPATE 
                
             }else resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
             somaAtributos1 = (float)pontosTuristicos1;
             somaAtributos2 = (float)pontosTuristicos2;
             break;
        case 5:
             printf("\n1 - Populacao");
             printf("\n2 - Area");
             printf("\n3 - PIB");
             printf("\n4 - Pontos Turisticos");
             printf("\n5 - PIB per Capita");
             printf("\n6 - Super Poder");
             if(desidadePopulacional1 == desidadePopulacional2)
             {
                resultado1 = 2; //VALOR PARA EMPATE 
                
             }else resultado1 = desidadePopulacional1 < desidadePopulacional2 ? 1 : 0;

             somaAtributos1 = desidadePopulacional1;
             somaAtributos2 = desidadePopulacional2;
             break;
        case 6:
             printf("\n1 - Populacao");
             printf("\n2 - Area");
             printf("\n3 - PIB");
             printf("\n4 - Pontos Turisticos");
             printf("\n5 - Densidade Populacional");
             printf("\n6 - Super Poder");
             if(pibPercapita1 == pibPercapita2)
             {
                resultado1 = 2; //VALOR PARA EMPATE 
                
             }else resultado1 = pibPercapita1 > pibPercapita2 ? 1 : 0;

             somaAtributos1 = pibPercapita1;
             somaAtributos2 = pibPercapita2;
             break;
        case 7:
             printf("\n1 - Populacao");
             printf("\n2 - Area");
             printf("\n3 - PIB");
             printf("\n4 - Pontos Turisticos");
             printf("\n5 - Densidade Populacional");
             printf("\n6 - PIB per Capita");
             if(superPoder1 == superPoder2)
             {
                resultado1 = 2; //VALOR PARA EMPATE 
                
             }else resultado1 = superPoder1 > superPoder2 ? 1 : 0;

             somaAtributos1 = superPoder1;
             somaAtributos2 = superPoder2;
             break;
        default:
             printf("\n\nOpcao invalida.");
             return 0;

    }

    printf("\n\n  Atributo 2: ");
    
    if(scanf("%d", &atributo2) == 1)
    {
        if(atributo2 < 1 || atributo2 > 6){
            printf("\n\n   Atributo incorreto. Inicie novamente.");
            return 0;
            

        } else {
                    if(atributo2 >= atributo1){ atributo2 += 1; }

                    switch(atributo2)
                    {
                        case 1:
                            if(populacao1 == populacao2)
                            {
                                resultado2 = 2; //VALOR PARA EMPATE 
                
                            }else resultado2 = populacao1 > populacao2 ? 1 : 0;

                            somaAtributos1 += populacao1;
                            somaAtributos2 += populacao2;
                            break;
                        case 2:
                            if(area1 == area2)
                            {
                                resultado2 = 2; //VALOR PARA EMPATE 
            
                            }else resultado2 = area1 > area2 ? 1 : 0;

                            somaAtributos1 += area1;
                            somaAtributos2 += area2;
                            break;
                        case 3:
                            if(pib1 == pib2)
                            {
                                resultado2 = 2; //VALOR PARA EMPATE 
            
                            }else resultado2 = pib1 > pib2 ? 1 : 0;

                            somaAtributos1 += pib1;
                            somaAtributos2 += pib2;
                            break;
                        case 4:
                            if(pontosTuristicos1 == pontosTuristicos2)
                            {
                                resultado2 = 2; //VALOR PARA EMPATE 
            
                            }else resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;

                            somaAtributos1 += (float)pontosTuristicos1;
                            somaAtributos2 += (float)pontosTuristicos2;
                            break;
                        case 5:
                            resultado2 = desidadePopulacional1 < desidadePopulacional2 ? 1 : 0;
                            somaAtributos1 += desidadePopulacional1;
                            somaAtributos2 += desidadePopulacional2;
                            break;
                        case 6:
                            resultado2 = pibPercapita1 > pibPercapita2 ? 1 : 0;
                            somaAtributos1 += pibPercapita1;
                            somaAtributos2 += pibPercapita2;
                            break;
                        case 7:
                            resultado2 = superPoder1 > superPoder2 ?1 : 0;
                            somaAtributos1 += superPoder1;
                            somaAtributos2 += superPoder2;
                            break;

                    }
                }
              
    } 


// Exibindo o resultado das comparações e o vencedor.

    printf("\n\nRESULTADO DO JOGO\n\n");

    printf("\t\t        Carta 1 \tCarta 2 \n");
    printf("                Cidade: %s \t |\t%s  ",nomeCidade1, nomeCidade2); 

    switch (atributo1)
    {
    case 1:
        printf("\n             Populacao: %ld \t |\t%ld", populacao1, populacao2);
        break;
    case 2:
        printf("\n              Area km2: %.2f \t |\t%.2f", area1, area2);
        break;
    case 3:
        printf("\n                   PIB: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f", pib1, pib2);
        break;
    case 4:
        printf("\n     Pontos Turisticos: %d \t |\t%d", pontosTuristicos1, pontosTuristicos2);
        break;
    case 5:
        printf("\nDensidade Populacional: %.2f \t |\t%.2f",desidadePopulacional1, desidadePopulacional2);
        break;
    case 6:
        printf("\n        PIB per Capita: %.2f \t |\t%.2f",pibPercapita1, pibPercapita2);
        break;
    case 7:
        printf("\n           Super Poder: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f",superPoder1, superPoder2);  
        break;
    
    }

    printf("\n    Atributo1 vencedor: ");
    if(resultado2)
    { 
        printf("\t  X \t |");
    }
    else{
            printf("    \t |\t X  ");
    }

    switch (atributo2)
    {
    case 1:
        printf("\n             Populacao: %ld \t |\t%ld", populacao1, populacao2);
        break;
    case 2:
        printf("\n              Area km2: %.2f \t |\t%.2f", area1, area2);
        break;
    case 3:
        printf("\n                   PIB: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f", pib1, pib2);
        break;
    case 4:
        printf("\n     Pontos Turisticos: %d \t |\t%d", pontosTuristicos1, pontosTuristicos2);
        break;
    case 5:
        printf("\nDensidade Populacional: %.2f \t |\t%.2f",desidadePopulacional1, desidadePopulacional2);
        break;
    case 6:
        printf("\n        PIB per Capita: %.2f \t |\t%.2f",pibPercapita1, pibPercapita2);
        break;
    case 7:
        printf("\n           Super Poder: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f",superPoder1, superPoder2);  
        break;
    
    }

    printf("\n    Atributo2 vencedor: ");
    if(resultado2)
    { 
        printf("\t  X \t |");
    }
    else{
            printf("    \t |\t X  ");
    }

    printf("\n           Super Poder: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f",somaAtributos1, somaAtributos2);

    printf("\n*************************************************************");
    printf("\n*                                                           *");

    if(somaAtributos1 > somaAtributos2)
    {
      printf("\n*\t Carta 1 - Cidade:  %s Venceu a Partida!!\t    *", nomeCidade1);
    }else if(somaAtributos1 == somaAtributos2 )
            {
                printf("\n*              Houve empate na Partida!!                    *");

            }else {
                     printf("\n*\t Carta 2 - Cidade:  %s Venceu a Partida!!\t    *", nomeCidade2);

                   }

    printf("\n*                                                           *");
    printf("\n*************************************************************");



/*

somaAtributos1 = 656794.99;
somaAtributos2 = 50000.99;

    printf("\n\nRESULTADO DO JOGO\n\n");

    printf("\t\t        Carta 1 \tCarta 2 \n");
    printf("                Cidade: %s \t |\t%s  ",nomeCidade1, nomeCidade2);  
   // printf("\n             Populacao: %ld \t |\t%ld", populacao1, populacao2);
  //  printf("\n              Area km2: %.2f \t |\t%.2f", area1, area2);
  //  printf("\n                   PIB: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f", pib1, pib2);
    printf("\n     Pontos Turisticos: %d \t |\t%d", pontosTuristicos1, pontosTuristicos2);
    printf("\n   Atributo 1 vencedor:");
    if(resultado2)
    { 
        printf("\t  X \t |");
    }
    else{
            printf("    \t |\t X  ");
    }
  //  printf("\nDensidade Populacional: %.2f \t |\t%.2f",desidadePopulacional1, desidadePopulacional2);
  //  printf("\n        PIB per Capita: %.2f \t |\t%.2f",pibPercapita1, pibPercapita2);
  //  printf("\n           Super Poder: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f",superPoder1, superPoder2);

      printf("\n           Super Poder: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f",somaAtributos1, somaAtributos2);

      printf("\n*************************************************************");
      printf("\n*                                                           *");
      if(somaAtributos1 > somaAtributos2)
      {
      printf("\n*\t Carta 1 - Cidade:  %s Venceu a Partida!!\t    *", nomeCidade1);
      }else if(somaAtributos1 == somaAtributos2 )
            {
      printf("\n*              Houve empate na Partida!!                    *");


             }else {
                     printf("\n*\t Carta 2 - Cidade:  %s Venceu a Partida!!\t    *", nomeCidade2);

                   }

      printf("\n*                                                           *");
      printf("\n*************************************************************");
*/

    return 0;
}
