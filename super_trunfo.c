#include <stdio.h>

int main (){
  char estado1, codigo1[4], cidade1[20];
  int pontosturisticos1;
  float area1, pib1, densidade1, capita1, superpoder1;
  unsigned long int populacao1; 

  char estado2, codigo2[4], cidade2[20];
  int pontosturisticos2;
  float area2, pib2, densidade2, capita2, superpoder2;
  unsigned long int populacao2;

  // CARTA 1
  printf("Digite a letra do estado da carta 1: \n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta 1: \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade da carta 1: \n");
  scanf("%s", &cidade1);

  printf("Digite o número de habitantes da carta 1: \n");
  scanf("%lu", &populacao1);

  printf("Digite a área da cidade em quilômetros quadrados da carta 1: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1: \n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da carta 1: \n");
  scanf("%d", &pontosturisticos1);
  printf("\n");

  // CARTA 2
  printf("Digite a letra do estado da carta 2: \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta 2: \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade da carta 2: \n");
  scanf("%s", &cidade2);

  printf("Digite o número de habitantes da carta 2: \n");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade em quilômetros quadrados da carta 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da carta 2: \n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da carta 2: \n");
  scanf("%d", &pontosturisticos2);
  printf("\n");

  // CÁLCULO
  densidade1 = (float)populacao1 / area1;
  capita1 = (float)(pib1 * 1000000000) / populacao1;
  superpoder1 = (float)(populacao1 + area1 + pib1 + pontosturisticos1 + capita1 + (1 / densidade1));

  densidade2 = (float)populacao2 / area2;
  capita2 = (float)(pib2 * 1000000000) / populacao2;
  superpoder2 = (float)(populacao2 + area2 + pib2 + pontosturisticos2 + capita2 + (1 / densidade2));

  // EXIBIÇÃO
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", capita1);
  printf("Super Poder: %.2f \n\n", superpoder1);

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", capita2);
  printf("Super Poder: %.2f \n\n", superpoder2);

  // COMPARAÇÃO
  printf("Valor 1 - Carta 1 vence, Valor 0 - Carta 2 vence! \n");
  printf("População: %d\n", populacao1 > populacao2);
  printf("Área: %d\n", area1 > area2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
  printf("Densidade Populacional: %d\n", densidade1 < densidade2);
  printf("PIB per Capita: %d\n", capita1 > capita2);
  printf("Super Poder: %d\n\n", superpoder1 > superpoder2);
  
  return 0;
}
