#include <stdio.h>
 
 int main(){
 
    //Variáveis das cartas 1 e 2.

    char estado1 [8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char estado2 [8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char nome_cidade1 [20];
    char nome_cidade2 [20];
    char codigo_carta1 [4];
    char codigo_carta2 [4];
    int pontos_turisticos1;
    int pontos_turisticos2;
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    
    //Dados das cartas 1 e 2.
 
     printf ("Carta 01:\n");
     
     printf("Digite o Estado:\n");
     scanf("%c", estado1);
     printf("Digite o codigo:\n");
     scanf("%s", codigo_carta1);
     printf("Digite o nome da cidade:\n");
     scanf ("%s", nome_cidade1);
     printf ("Digite a população:\n");
     scanf("%d", &populacao1);
     printf("Digite qual a Área:\n");
     scanf("%f", &area1);
     printf("Digite qual o PIB:\n");
     scanf("%f", &PIB1);
     printf("Digite quantos pontos turisticos:\n");
     scanf ("%d", &pontos_turisticos1);
 
     printf("Carta 02:\n");
     
     printf ("Digite o Estado:\n");
     scanf (" %c", estado2);
     printf ("Digite o codigo:\n");
     scanf (" %s", codigo_carta2);
     printf ("Digite o nome da cidade:\n");
     scanf ("%s", nome_cidade2);
     printf ("Digite a população:\n");
     scanf ("%d", &populacao2);
     printf ("Digite qual a Área:\n");
     scanf ("%f", &area2);
     printf ("Digite qual o PIB:\n");
     scanf ("%f", &PIB2);
     printf ("Digite quantos pontos turisticos:\n");
     scanf ("%d", &pontos_turisticos2);
     
     // Utilizando dos dados apresentados para preencher as cartas 1 e 2.
 
     printf ("Carta 1:\n");
     
     printf ("Estado: %s\n", estado1);
     printf ("Código: %s\n", codigo_carta1);
     printf ("Nome da Cidade: %s\n", nome_cidade1);
     printf ("População: %d\n", populacao1);
     printf ("Área (em km²): %.2f\n", area1);
     printf ("PIB: %.2f\n", PIB1);
     printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

     printf ("Carta 2:\n");
     
     printf ("Estado: %s\n", estado2);
     printf ("Código: %s\n", codigo_carta2);
     printf ("Nome da Cidade: %s\n", nome_cidade2);
     printf ("População: %d\n", populacao2);
     printf ("Área (em km²): %.2f\n", area2);
     printf ("PIB: %.2f\n", PIB2);
     printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
 
 
     return 0;
 
 }
