#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() 
{
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

    int resultado1, resultado2; //variaveis para guardar o resultado da comparaçao dos atributos
    float somaAtributos1, somaAtributos2; //Variavel para guardar a soma dos atributos 
    
    int atributo1, atributo2; // Variavel auxiliar para dinamica do menu


    //INICIO DO JOGO - CRIAÇÃO DAS DUAS CARTAS E INSERÇÃO DOS VALORES DOS ATRIBUTOS.
    // TRECHO DO CODIGO RESPONSAVEL POR CAPTURAR VIA TECLADO OS DADOS SOLICITADOS E SALVANDO NOS ATRIBUTOS CRIADOS
/*
    Printf("\tINICIANDO O JOGO ... \n\n");

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

    
    printf("\n\n   Dados das Cartas 1 e 2.");
    // TRECHO DO CODIGO RESPONSAVEL POR MOSTRAR OS DADOS SALVOS NOS ATRIBUTOS DE CADA CARTA 

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

    //----------Inicio do Menu dinamico-----------//

    printf("\n\n\t INICIANDO BATALHA ");
  
    //EXIBE UM INDICE DO MENU 1 ONDE O JOGADOR TERÁ QUE ESCOLHER UMA OPÇAO ATRAVES DOS NUMEROS.
    printf("\n\n\nEscolha dois atributos para iniciar. \n");
    printf("\n1 - Populacao");
    printf("\n2 - Area");
    printf("\n3 - PIB");
    printf("\n4 - Pontos Turisticos");
    printf("\n5 - Densidade Populacional");
    printf("\n6 - PIB per Capita");
    printf("\n7 - Super Poder");

    printf("\n\n  Atributo 1: ");
    
    //TRECHO DO CODIGO ONDE É CAPTURADO A OPÇAO ESCOLHIDA PELO JOGADOR VIA TECLADO
    if(scanf("%d", &atributo1) == 1){
        if(atributo1 < 1 || atributo1 > 7){
            printf("\n\n   Atributo incorreto. Inicie novamente.");
            return 0;
        } 
    } 

    //INICIO DA CAPTURA DO SEGUNDO ATRIBUTO PARA COMPARAÇAO
    printf("\n\nEscolha o segundo atributo.");
    
    //TRECHO DO CODIGO RESPONSAVEL POR MOSTRAR O MENU DE INDICE SEM A OPÇAO ESCOLHIDA NO MENU ANTERIOR 
    //REALIZAR A COMPARAÇAO DO ATRIBUTO ESCOLHIDO ANTERIORMENTE E ARMAZENAR NA VARIAVEL resultado1 DE ACRODO COM A OPÇAO ESCOLHIDA
    //PARA CADA OPÇAO DO INDICE EXITE UM case do switch PARA DETERMINAR O ATRIBUTO ESCOLHIDO E FAZER A COMPARAÇAO
    //DE ACORDO COM O ATRIBUTO ESCOLHIDO ALEM DA COMPARAÇAO É ARMAZENADO O VALOR DE CADA ATRIBUTO DE CADA CARTA PARA SEREM USANDOS NO CALCULO DO RESULTADO. 
  
    switch(atributo1){
        case 1:
             printf("\n1 - Area");
             printf("\n2 - PIB");
             printf("\n3 - Pontos Turisticos");
             printf("\n4 - Densidade Populacional");
             printf("\n5 - PIB per Capita");
             printf("\n6 - Super Poder");
             
             //TRECHO RESPONSAVEL POR REALIZAR A COMPARACAO ENTRE O ATRIBUTO ESCOLHIDO PRIMERIO
             //E ARMAZENAR NA VARIAVEL resultado1 O VENCEDOR.
             resultado1 = populacao1 > populacao2 ? 1 : 0;  
             
             //NESSE TRECHO DO CODIGO SAO ARMAZENADAS OS VALORES DOS ATRIBUTOS PARA SEREM USADAS NA SOMA DO RESULTADO FINAL
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
             
             resultado1 = area1 > area2 ? 1 : 0;
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

             resultado1 = pib1 > pib2 ? 1 : 0;
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
             
             resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
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

             resultado1 = desidadePopulacional1 < desidadePopulacional2 ? 1 : 0;
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

             resultado1 = pibPercapita1 > pibPercapita2 ? 1 : 0;
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

             resultado1 = superPoder1 > superPoder2 ? 1 : 0;
             somaAtributos1 = superPoder1;
             somaAtributos2 = superPoder2;
             break;
        default:
             printf("\n\nOpcao invalida.");  //TRECHO default DO SWITCH CASO O JOGADOR ESCOLHA UMA OPÇAO INVALIDA 
             return 0; // DÁ UM return para encerrar o jogo.

    }// FIM DO SWITCH CASE MENU 2 

    //TRECHO DA CAPTURA DA OPÇAO DO MENU 2

    printf("\n\n  Atributo 2: ");
    
    if(scanf("%d", &atributo2) == 1)
    {
        if(atributo2 < 1 || atributo2 > 6) //CONDIÇAO QUE VERIFICA SE A OPÇAO ESCOLHIDA É VALIDA SE FOR MENOR QUE 1 OU MAIOR QUE 6 FINALIZA O JOGO
        {
            printf("\n\n   Atributo incorreto. Inicie novamente."); 
            return 0; // DÁ UM return para encerrar o jogo.

        } else {   //CASO A OPÇAO ESCOLIDA ESTEJA ENTRE 1 E 6 REALIZA AS INSTRUÇOES ABAIXO

                    if(atributo2 >= atributo1){ atributo2 += 1; } // CONDIÇAO PARA AJUSTAR O INDICE ESCOLHIDO NO MENU 2 DE ACORDO COM INDICE DO MENU 1 PARA TRATAR OS ATRIBUTOS NUM GERAL

                     //TRECHO DO CODIGO RESPONSAVEL POR COMPARAR E CALCULAR A SOMA DOS ATRIBUTOS 
                     //REALIZAR A COMPARAÇAO DO ATRIBUTO ESCOLHIDO NO MENU 2 E ARMAZENAR NA VARIAVEL resultado2
                     //PARA CADA OPÇAO DO INDICE EXITE UM case do switch PARA DETERMINAR O ATRIBUTO ESCOLHIDO E FAZER A COMPARAÇAO
                     //DE ACORDO COM O ATRIBUTO ESCOLHIDO ALEM DA COMPARAÇAO É ARMAZENADO O VALOR DE CADA ATRIBUTO DE CADA CARTA PARA SEREM USANDOS NO CALCULO DO RESULTADO. 
                     
                    switch(atributo2) 
                    {
                        case 1:
                             //TRECHO RESPONSAVEL POR REALIZAR A COMPARACAO ENTRE O ATRIBUTO ESCOLHIDO PRIMERIO
                             //E ARMAZENAR NA VARIAVEL resultado2 O VENCEDOR.
                            resultado2 = populacao1 > populacao2 ? 1 : 0;

                            //NESSE TRECHO DO CODIGO SAO ARMAZENADAS OS VALORES DOS ATRIBUTOS PARA SEREM USADAS NA SOMA DO RESULTADO FINAL
                            somaAtributos1 += (float)populacao1;
                            somaAtributos2 += (float)populacao2;
                            break;
                        case 2:
                            resultado2 = area1 > area2 ? 1 : 0;
                            somaAtributos1 += area1;
                            somaAtributos2 += area2;
                            break;
                        case 3:
                            resultado2 = pib1 > pib2 ? 1 : 0;
                            somaAtributos1 += pib1;
                            somaAtributos2 += pib2;
                            break;
                        case 4:
                            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
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

//FINAL DO CODIGO - EXIBIÇAO DO RESULTADO DA COMPARAÇAO E QUAL CARTA GANHOU

 //FEITO TABULAÇAO COM \t DA INFORMAÇAO EXIBIDA PARA MELHORAR A ESTERICA DE EXIBIÇAO DOS VALORES

    printf("\n\nRESULTADO DO JOGO\n\n");

    printf("\t\t        Carta 1 \tCarta 2 \n");
    printf("                Cidade: %s \t |\t%s  ",nomeCidade1, nomeCidade2); 

    switch (atributo1)//UTILIZADO SWITCH-CASE PARA EXIBIR O ATRIBUTO DE CADA CARTA COM SEUS VALORES DE ACORDO COM A ESCOLHA REALIZADA NO MENU 1
    {
    case 1:
        printf("\n             Populacao: %ld \t |\t%ld", populacao1, populacao2);
        break;
    case 2:
        printf("\n              Area km2: %.2f \t |\t%.2f", area1, area2);
        break;
    case 3:
        printf("\n                   PIB: %.2f \t \b\b\b\b\b\b\b\b|\t%.2f", pib1, pib2); // UTILIZADO \b para recuar para esquerda - para nao quebrar a tabulaçao
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
    //TRECHO RESPONSAVEL POR EXIBIR NA TELA QUEM GANHOU NA COMPARAÇAO DO ATRIBUTO 1 ESCOLHIDO MENU 1
    printf("\n    Atributo1 vencedor: "); 
    if(resultado1)
    { 
        printf(" X \t |");
    }
    else{
            printf("    \t |\t X  ");
    }

    switch (atributo2)     //UTILIZADO SWITCH-CASE PARA EXIBIR O ATRIBUTO DE CADA CARTA COM SEUS VALORES DE ACORDO COM A ESCOLHA REALIZADA NO MENU 2
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

     //TRECHO RESPONSAVEL POR EXIBIR NA TELA QUEM GANHOU NA COMPARAÇAO DO ATRIBUTO 2 ESCOLHIDO MENU 2
    printf("\n    Atributo2 vencedor: ");
    if(resultado2)
    { 
        printf(" X \t |");
    }
    else{
            printf("    \t |\t X  ");
    }

    //TRECHO RESPONSAVEL POR EXIBIR O RESULTADO DA SOMA DOS ATRIBUTOS PARA CADA CARTA E EXIBIR NA TABELA
    printf("\n\n  \tSuper Poder: %.2f \t |\t%.2f",somaAtributos1, somaAtributos2);

    //TRECHO ONDE É DETERMINADO QUEM GANHOU OU SE EMPATOU
    printf("\n*************************************************************");
    printf("\n*                                                           *");

    // CONDIÇAO QUE VERIFICA SE A SOMADA DOS ATRIBUTOS DA CARTA 1 É MAIOR DO QUE SOMA DOS ATRIBUTOS DA CARTA 2
    if(resultado1 && resultado2 || resultado1 && (somaAtributos1 > somaAtributos2) || resultado2 && (somaAtributos1 > somaAtributos2))
    {
      
        printf("\n*\t Carta 1 - Cidade:  %s Venceu a Partida!!\t    *", nomeCidade1);// CASO SE A CONDIÇAO FOR VERDADEIRA CARTA 1 VENCEU

    }else if(!resultado1 && !resultado2 || !resultado1 && (somaAtributos1 < somaAtributos2) || !resultado2 && (somaAtributos1 < somaAtributos2))
            {
                printf("\n*\t Carta 2 -  %s Venceu a Partida!!\t    *", nomeCidade2);

            }else {

                     printf("\n*              Houve empate na Partida!!                    *");// EXIBI A MENSAGEM DE EMPATE

                   }

    printf("\n*                                                           *");
    printf("\n*************************************************************");
*/

somaAtributos1 = 2;
somaAtributos2 = 2;
resultado1 = 1;
resultado2 = 0;

if(resultado1 && resultado2 || resultado1 && (somaAtributos1 > somaAtributos2) || resultado2 && (somaAtributos1 > somaAtributos2))
{   
    printf("CARTA 1 VENCEU\n\n\n");

}else if(!resultado1 && !resultado2 || !resultado1 && (somaAtributos1 < somaAtributos2) || !resultado2 && (somaAtributos1 < somaAtributos2))
      {
        printf(" CARTA 2 VENCEU \n\n");

      }else printf("HOUVE EMPATES\n\n");













    return 0;
}
