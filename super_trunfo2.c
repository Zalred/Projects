#include <stdio.h>

int main (){
  char cidade1[20];
  int populacao1, pontosturisticos1;
  float area1, pib1, densidade1, capita1;

  char cidade2[20];
  int populacao2, pontosturisticos2;
  float area2, pib2, densidade2, capita2;

  int opcao;

  printf("### INICIANDO SUPER TRUNFO... ###: \n\n");

  // ENTRADA DE DADOS DA CARTA 1
  printf("Digite o nome da cidade da carta 1: \n");
  scanf(" %[^\n]", &cidade1);

  printf("Digite o número de habitantes da carta 1: \n");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade em quilômetros quadrados da carta 1: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1: \n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da carta 1: \n");
  scanf("%d", &pontosturisticos1);
  printf("\n");

  // ENTRADA DE DADOS DA CARTA 2
  printf("Digite o nome da cidade da carta 2: \n");
  scanf(" %[^\n]", &cidade2);

  printf("Digite o número de habitantes da carta 2: \n");
  scanf("%d", &populacao2);

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

  densidade2 = (float)populacao2 / area2;
  capita2 = (float)(pib2 * 1000000000) / populacao2;

  // MENU
  printf("Escolha uma opção de comparação das cartas:\n");
  printf("1: População\n");
  printf("2: Área\n");
  printf("3: PIB\n");
  printf("4: Densidade demográfica\n");
  scanf("%d", &opcao);

  // RESULTADO
  switch (opcao) {
  case 1:
    printf("%s -- %s\n", cidade1, cidade2);
    printf("População: Carta 1 %d -- Carta 2 %d\n", populacao1, populacao2);
    if (populacao1 > populacao2) {
      printf("Vencedora: %s\n!", cidade1);
    } else if (populacao2 > populacao1) {
      printf("Vencedora: %s\n!", cidade2);
    } else {
        printf("Empate!\n");
    }
  break;
  case 2:
    printf("%s -- %s\n", cidade1, cidade2);
    printf("Área: Carta 1 %f km² -- Carta 2 %f km²\n", area1, area2);
    if (area1 > area2) {
      printf("Vencedora: %s\n!", cidade1);
    } else if (area2 > area1) {
      printf("Vencedora: %s\n!", cidade2);
    } else {
        printf("Empate!\n");
    }
  break;
  case 3:
    printf("%s -- %s\n", cidade1, cidade2);
    printf("PIB: Carta 1 %f bilhões -- Carta 2 %f bilhões\n", pib1, pib2);
    if (pib1 > pib2) {
      printf("Vencedora: %s\n!", cidade1);
    } else if (pib2 > pib1) {
      printf("Vencedora: %s\n!", cidade2);
    } else {
        printf("Empate!\n");
    }
  break;
  case 4:
    printf("%s -- %s\n", cidade1, cidade2);
    printf("Densidade demográfica: Carta 1 %f hab/km² -- Carta 2 %f hab/km²\n", densidade1, densidade2);
    if (densidade1 < densidade2) {
      printf("Vencedora: %s\n!", cidade1);
    } else if (densidade2 < densidade1) {
      printf("Vencedora: %s\n!", cidade2);
    } else {
        printf("Empate!\n");
    }
  break;
  default:
    printf("Opção inválida!");
  break;
  }
}