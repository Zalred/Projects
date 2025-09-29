#include <stdio.h> // Biblioteca de funções básicas (printf, scanf)

int main (){ // Início do código
  // DADOS DAS CARTAS
  char cidade1[20] = "São Paulo";
  int populacao1 = 12325000; 
  float area1 = 1521.11, pib1 = 699.28, densidade1 = (float)populacao1 / area1; // CÁLCULO DA DENSIDADE1
  // (float)populacao1 força a variável populacao1 a ser tratada como float

  char cidade2[20] = "Rio de Janeiro";
  int populacao2 = 6748000;
  float area2 = 1200.25, pib2 = 300.50, densidade2 = (float)populacao2 / area2; // CÁLCULO DA DENSIDADE2

  // VARIÁVEIS DO JOGO
  int opcao1, opcao2; // São os números que irão ser tratados como opção no menu do jogo pelo scanf
  int resultado1 = 0, resultado2 = 0; // Iguais a 0 para que possam ser somados + 1 nas opções que ganharem

  // MENU DA OPÇÃO 1
  printf(" ### JOGO DE COMPARAÇÃO DE CARTAS ### \n");
  printf("Escolha o PRIMEIRO atributo para a comparação:\n");
  printf("1: População\n");
  printf("2: Área\n");
  printf("3: PIB\n");
  printf("4: Densidade demográfica\n");
  scanf("%d", &opcao1);
  printf("\n");

  // MENU DA OPÇÃO 2
  printf("Escolha o SEGUNDO atributo para a comparação:\n");
  printf("1: População\n");
  printf("2: Área\n");
  printf("3: PIB\n");
  printf("4: Densidade demográfica\n");
  printf(" ### ESCOLHA UM ATRIBUTO DIFERENTE DO PRIMEIRO! ### \n");
  scanf("%d", &opcao2);
  printf("\n");

  // VERIFICAÇÃO DAS ESCOLHAS E COMPARAÇÕES
  if (opcao1 == opcao2){
    printf("Você escolheu o mesmo atributo! Fim do programa...\n"); // O programa encerra para evitar comparação repetida
  } else { // Se não for a mesma opção, o programa segue
  switch (opcao1) { // OPÇÃO 1, dependendo da opção escolhida acima, ele vai tratar um dos "case"
  case 1: // Opção 1 escolhida
  if (populacao1 > populacao2) {
    resultado1 = resultado1 + 1; // resultado1 vai ganhar o valor de 1 pois ele tinha o valor de 0
  } else if (populacao2 > populacao1) {
    resultado2 = resultado2 + 1; // O mesmo caso só que para a variável resultado2
  }
  break; // Fim do case 1, para que não continue tratando continuamente
  case 2:
  if (area1 > area2) {
    resultado1 = resultado1 + 1;
  } else if (area2 > area1) {
    resultado2 = resultado2 + 1;
  }
  break;
  case 3:
  if (pib1 > pib2) {
    resultado1 = resultado1 + 1;
  } else if (pib2 > pib1) {
    resultado2 = resultado2 + 1;
  }
  break;
  case 4:
  if (densidade1 < densidade2) { // A densidade tem que ser menor que a outra para que um vença
    resultado1 = resultado1 + 1;
  } else if (densidade2 < densidade1) {
    resultado2 = resultado2 + 1;
  }
  break;
  default: // default é usado caso nenhuma das opções dos "case" seja selecionada
    printf("Opção inválida!");
  break;
  }

  switch (opcao2) { // OPÇÃO 2, segunda comparação feita no jogo, segue o mesmo raciocínio do switch opcao1
  case 1:
  if (populacao1 > populacao2) {
    resultado1 = resultado1 + 1;
  } else if (populacao2 > populacao1) {
    resultado2 = resultado2 + 1;
  }
  break;
  case 2:
  if (area1 > area2) {
    resultado1 = resultado1 + 1;
  } else if (area2 > area1) {
    resultado2 = resultado2 + 1;
  }
  break;
  case 3:
  if (pib1 > pib2) {
    resultado1 = resultado1 + 1;
  } else if (pib2 > pib1) {
    resultado2 = resultado2 + 1;
  }
  break;
  case 4:
  if (densidade1 < densidade2) {
    resultado1 = resultado1 + 1;
  } else if (densidade2 < densidade1) {
    resultado2 = resultado2 + 1;
  }
  break;
  default:
    printf("Opção inválida!");
  break;
  }

  // RESULTADO
  printf("Cartas: %s vs %s\n\n", cidade1, cidade2); // %s puxa a string dos nomes cidade1 e cidade2 para que apareçam na impressão
  switch(opcao1) { // Depois de somado os pontos acima, essa parte mostrará as informações das comparações
  case 1:
    printf("Atributo 1: População\n > %s: %d\n > %s: %d\n\n", cidade1, populacao1, cidade2, populacao2); 
    // %s puxa string cidade1 e %d (int) puxa populacao1, o mesmo com o 2
    // Nenhum cálculo foi feito aqui, apenas divulgação dos números das variáveis para comparação
  break;
  case 2: 
    printf("Atributo 1: Área\n > %s: %.2f km2\n > %s: %.2f km2\n\n", cidade1, area1, cidade2, area2); 
  break;
  case 3: 
    printf("Atributo 1: PIB\n > %s: %.2f bilhoes\n > %s: %.2f bilhoes\n\n", cidade1, pib1, cidade2, pib2); 
  break;
  case 4: 
    printf("Atributo 1: Densidade\n > %s: %.2f hab/km2\n > %s: %.2f hab/km2\n\n", cidade1, densidade1, cidade2, densidade2); 
  break;
  default:
    printf("Opção inválida!"); // Caso tenha sido selecionado outra opção inexistente no código
  break;
  }

  switch(opcao2) {
  case 1: 
    printf("Atributo 2: População\n > %s: %d\n > %s: %d\n\n", cidade1, populacao1, cidade2, populacao2); 
  break;
  case 2: 
    printf("Atributo 2: Área\n > %s: %.2f km2\n > %s: %.2f km2\n\n", cidade1, area1, cidade2, area2); 
  break;
  case 3: 
    printf("Atributo 2: PIB\n > %s: %.2f bilhoes\n > %s: %.2f bilhoes\n\n", cidade1, pib1, cidade2, pib2); 
  break;
  case 4: 
    printf("Atributo 2: Densidade\n > %s: %.2f hab/km2\n > %s: %.2f hab/km2\n\n", cidade1, densidade1, cidade2, densidade2); 
  break;
  default:
    printf("Opção inválida!");
  break;
  }

  printf("Pontuação Final:\n");
  printf(" > Carta 1 (%s): %d ponto(s)\n", cidade1, resultado1); // Mostra do resultado1 final, depois de feito as somas
  printf(" > Carta 2 (%s): %d ponto(s)\n\n", cidade2, resultado2); // Mostra do resultado2 final, depois de feito as somas

  // VENCEDOR FINAL
  printf("VENCEDOR: "); // Como não foi colocado \n aqui, o printf abaixo vai aparecer aqui
  if (resultado1 > resultado2) {
    printf("Carta 1 (%s)!\n", cidade1);
  } else if (resultado2 > resultado1) {
    printf("Carta 2 (%s)!\n", cidade2);
  } else {
    printf("Empate!\n");
  }
  }
return 0;
}
