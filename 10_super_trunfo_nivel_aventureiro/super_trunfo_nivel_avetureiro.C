#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Declaração das variáveis da  Carta1

  char estado1[5]; 
  char codigo1[10];  
  char cidade1[20];
  int populaçao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float dencidade_populacional1;
  float pib_per_capita1;

  // Área para entrada de dados Carta 1

  printf("---CARTA 1---\n");

  printf("Estado: ");
  scanf(" %s", estado1);

  printf("Código: ");
  scanf(" %s", codigo1);

  printf("Cidade: ");
  scanf(" %s", cidade1);

  printf("População: ");
  scanf(" %d", &populaçao1);

  printf("Área: ");
  scanf(" %f", &area1);

  printf("Pib: ");
  scanf(" %f", &pib1);

  printf("Pontos Turisticos: ");
  scanf(" %d", &pontos_turisticos1);

  // Calcular a densidade populacional da Carta1: Usando operador aritimético de divisão com conversão explicita
  dencidade_populacional1 = (float) populaçao1 / area1;
  // Calcular o PIB per capita da Carta1: com operador aritimético de divisão com conversão explicita
  pib_per_capita1 = (float) pib1 / populaçao1;
    

  // Área para exibição dos dados da cidade
  //Imprime os dados da Carta 1 utilizando printf
  
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d Mil\n", populaçao1);
  printf("Área: %.2f Km²\n", area1);
  printf("Pib: %.2f Bilhões De Reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos_turisticos1);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  printf("Demografia: %.2f Hab/Km²\n", dencidade_populacional1);
  printf("PIB per Capita: %.2f Reais\n", pib_per_capita1);

  // Declaração das variáveis da Carta2

  char estado2[5]; 
  char codigo2[10];  
  char cidade2[20];
  int populaçao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float dencidade_populacional2;
  float pib_per_capita2;

 // Área para entrada e saida de dados Carta 2

  printf("---CARTA 2---\n");

  printf("Estado: ");
  scanf(" %s", estado2);

  printf("Código: ");
  scanf(" %s", codigo2);

  printf("Cidade: ");
  scanf(" %s", cidade2);

  printf("População: ");
  scanf(" %d", &populaçao2);

  printf("Área: ");
  scanf(" %f", &area2);

  printf("Pib: ");
  scanf(" %f", &pib2);

  printf("Pontos turisticos: ");
  scanf(" %d", &pontos_turisticos2);

  // Calcular a densidade populacional da Carta2: Usando operador aritimético de divisão com conversão explicita
  dencidade_populacional2 = (float) populaçao2 / area2;
  // Calcular o PIB per capita da Carta2: com operador aritimético de divisão com conversão explicita
  pib_per_capita2 = (float) pib2 / populaçao2;
   

 // Área para exibição dos dados da cidade
 //Imprime os dados da Carta 2 utilizando printf

  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d Mil\n", populaçao2);
  printf("Área: %.2f Km²\n", area2);
  printf("Pib: %.2f Bilhões De Reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos_turisticos2);

  // Área para definição das variáveis para armazenar as propriedades das cidades
  printf("Demografia: %.2f Hab/Km²\n", dencidade_populacional2);
  printf("PIB per Capita: %.2f Reais\n", pib_per_capita2);

return 0;
} 