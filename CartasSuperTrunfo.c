#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[10];
char codigo1[4];
float populacao1;
float area1;
float pib1;
int pontos_turisticos1;

char estado2[10];
char codigo2[4];
float populacao2;
float area2;
float pib2;
int pontos_turisticos2;

  // Área para entrada de dados
  // PRIMEIRA CARTA
printf("PRIMEIRA CARTA\n");

printf("informe o estado:\n");
scanf(" %9s", estado1);

printf("informe o codigo:\n");
scanf(" %3s", codigo1);

printf("informe a população:\n");
scanf("%f", &populacao1);

printf("informe a area:\n");
scanf("%f", &area1);

printf("informe o PIB:\n");
scanf("%f", &pib1);

printf("informe quantos pontos turisticos:\n");
scanf("%d", &pontos_turisticos1);

  // SEGUNDA CARTA
printf("SEGUNDA CARTA\n");

printf("informe o estado:\n");
scanf(" %9s", estado2);

printf("informe o codigo:\n");
scanf(" %3s", codigo2);

printf("informe a população:\n");
scanf("%f", &populacao2);

printf("informe a area:\n");
scanf("%f", &area2);

printf("informe o PIB:\n");
scanf("%f", &pib2);

printf("informe quantos pontos turisticos:\n");
scanf("%d", &pontos_turisticos2);



  // Área para exibição dos dados da cidade
printf("PRIMEIRA CARTA COMPOSTA POR:\n");
printf("estado: %s\n", estado1);
printf("codigo: %s\n", codigo1);
printf("população: %.2f\n", populacao1);
printf("area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("pontos turisticos: %d\n", pontos_turisticos1);

printf("SEGUNDA CARTA COMPOSTA POR:\n");
printf("estado: %s\n", estado2);
printf("codigo: %s\n", codigo2);
printf("população: %.2f\n", populacao2);
printf("area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("pontos turisticos: %d\n", pontos_turisticos2);

return 0;

} 
