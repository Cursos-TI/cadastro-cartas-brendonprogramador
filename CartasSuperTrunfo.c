#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
char codigo1[4];
char cidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidade_populacional1;
float pib_por_capita1;
float super_poder1;


char estado2;
char codigo2[4];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_populacional2;
float pib_por_capita2;
float super_poder2;

  // Área para entrada de dados
  // PRIMEIRA CARTA
printf("PRIMEIRA CARTA\n");

printf("Informe a Cidade: \n");
scanf(" %49s", cidade1);

printf("Informe o Estado: \n");
scanf(" %c", &estado1);

printf("Informe o Codigo: \n");
scanf(" %3s", codigo1);

printf("Informe a População: \n");
scanf("%lu", &populacao1);

printf("Informe a Area: \n");
scanf("%f", &area1);

printf("Informe o PIB: \n");
scanf("%f", &pib1);

printf("Informe Quantos Pontos Turisticos: \n");
scanf("%d", &pontos_turisticos1);

  // SEGUNDA CARTA
printf("SEGUNDA CARTA\n");

printf("Informe a Cidade: \n");
scanf(" %49s", cidade2);

printf("Informe o Estado: \n");
scanf(" %c", &estado2);

printf("Informe o Codigo: \n");
scanf(" %3s", codigo2);

printf("Informe a População: \n");
scanf("%lu", &populacao2);

printf("Informe a Area: \n");
scanf("%f", &area2);

printf("Informe o PIB: \n");
scanf("%f", &pib2);

printf("Informe Quantos Pontos Turisticos: \n");
scanf("%d", &pontos_turisticos2);


//CALCULO DE DENSIDADE E PIB POR CAPITAL//
densidade_populacional1 = populacao1 / area1;
pib_por_capita1 = pib1 / populacao1;

densidade_populacional2 = populacao2 / area2;
pib_por_capita2 = pib2 / populacao2;

super_poder1 = (float)(populacao1 + area1 + pontos_turisticos1 + pib_por_capita1);
densidade_populacional1 - super_poder1;

super_poder2 = (float)(populacao2 + area2 + pontos_turisticos2 + pib_por_capita2);
densidade_populacional2 - super_poder2;
  // Área para exibição dos dados da cidade
printf("PRIMEIRA CARTA COMPOSTA POR:\n");
printf("Cidade: %s\n", cidade1);
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("População: %lu\n", populacao1);
printf("Area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos Turisticos: %d\n", pontos_turisticos1);
printf("Densidade Populacional: %.2f\n", densidade_populacional1);
printf("PIB por capita: %.2f\n", pib_por_capita1);
printf("Super Poder da carta: %.2f\n", super_poder1);
printf("Super Poder Menos a Densidade: %.2f\n", densidade_populacional1);

printf("//////////////////////////////////////\n");

printf("SEGUNDA CARTA COMPOSTA POR:\n");
printf("Cidade: %s\n", cidade2);
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("População: %lu\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turisticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %.2f\n", densidade_populacional2);
printf("PIB por capita: %.2f\n", pib_por_capita2);
printf("Super Poder da carta: %.2f\n", super_poder2);
printf("Super Poder Menos a Densidade: %.2f\n", densidade_populacional2);


return 0;

} 
