#include <stdio.h>

int main() {
  //Informações da carta 1
  char estado_1;
  char cod_carta_1[4]; //Em C, as strings sempre terminam com um caractere especial chamado '\0' (nulo), que marca o fim da string, por isso foi usado [4]
  char nome_cidade_1[30];
  unsigned long int populacao_1;
  float area_1;
  float pib_1;
  int pts_turisticos_1;
  float densidade_populacional_1;
  float pib_per_capita_1;
  float super_poder_1;

  //Informações da carta 2
  char estado_2;
  char cod_carta_2[4];
  char nome_cidade_2[30];
  unsigned long int populacao_2;
  float area_2;
  float pib_2;
  int pts_turisticos_2;
  float densidade_populacional_2;
  float pib_per_capita_2;
  float super_poder_2;

  //Entrada de dados carta 1
  printf("***** Cadastro da carta 1 *****\n");
  printf("Estado (um letra de 'A' a 'H'): ");
  scanf(" %c", &estado_1);

  printf("Código (ex: A01): ");
  scanf("%s", cod_carta_1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nome_cidade_1);

  printf("População: ");
  scanf("%lu", &populacao_1);

  printf("Área em km²: ");
  scanf("%f", &area_1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib_1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pts_turisticos_1);

  //Entrada de dados carta 2
  printf("\n***** Cadastro da carta 2 *****\n");
  printf("Estado (um letra de 'A' a 'H'): ");
  scanf(" %c", &estado_2);

  printf("Código (ex: A01): ");
  scanf("%s", cod_carta_2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nome_cidade_2);

  printf("População: ");
  scanf("%lu", &populacao_2);

  printf("Área em km²: ");
  scanf("%f", &area_2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib_2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pts_turisticos_2);
  printf("\n");

  //Cálculos da carta 1
  densidade_populacional_1 = (float) populacao_1 / area_1;
  pib_per_capita_1 = (pib_1 * 1000000000.0) / (float)populacao_1;
  super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pts_turisticos_1 + pib_per_capita_1 + (1.0 / densidade_populacional_1);

  //Cálculos da carta 2
  densidade_populacional_2 = (float) populacao_2 / area_2;
  pib_per_capita_2 = (pib_2 * 1000000000.0) / (float)populacao_2;
  super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pts_turisticos_2 + pib_per_capita_2 + (1.0 / densidade_populacional_2);


  //Saída de dados carta 1
  printf("===== CARTA 1 =====\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", cod_carta_1);
  printf("Nome da cidade: %s\n", nome_cidade_1);
  printf("População: %lu\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de pontos turísticos: %d\n", pts_turisticos_1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
  printf("Super Poder: %.2f\n", super_poder_1);

  //Saída de dados carta 2
  printf("\n===== CARTA 2 =====\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", cod_carta_2);
  printf("Nome da cidade: %s\n", nome_cidade_2);
  printf("População: %lu\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de pontos turísticos: %d\n", pts_turisticos_2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
  printf("Super Poder: %.2f\n\n", super_poder_2);

  //Menu para escolher atributos

  int atributoEscolhido;

  printf("===== Menu de atributos =====\n");
  printf("1. Nome do país (exibe apenas o nomes, não compara)\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Número de pontos turísticos\n");
  printf("6. Densidade populacional\n");
  printf("Escolha um atributo: ");
  scanf("%d", &atributoEscolhido);

  //Comparação de cartas a partir da escolha do atributo

  switch(atributoEscolhido){
    case 1:
      printf("\n***** ATRIBUTO: NOME DO PAÍS *****\n");
      printf("Carta 1 - %s\n", nome_cidade_1);
      printf("Carta 2 - %s\n", nome_cidade_2);
      break;
    case 2:
      printf("***** ATRIBUTO: POPULAÇÃO *****\n");
      printf("Carta 1 - %s: %d\n", nome_cidade_1, populacao_1);
      printf("Carta 2 - %s: %d\n", nome_cidade_2, populacao_2);
      if(populacao_1 == populacao_2) {
        printf("Empatou!\n");
      } else if(populacao_1 > populacao_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      }
      break;
    case 3:
      printf("***** ATRIBUTO: ÁREA *****\n");
      printf("Carta 1 - %s: %.2f\n", nome_cidade_1, area_1);
      printf("Carta 2 - %s: %.2f\n", nome_cidade_2, area_2);
      if(area_1 == area_2) {
        printf("Empatou!\n");
      } else if(area_1 > area_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      }
      break;
    case 4:
      printf("***** ATRIBUTO: PIB *****\n");
      printf("Carta 1 - %s: %.2f\n", nome_cidade_1, pib_1);
      printf("Carta 2 - %s: %.2f\n", nome_cidade_2, pib_2);
      if(pib_1 == pib_2) {
        printf("Empatou!\n");
      } else if(pib_1 > pib_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      }
      break;
    case 5:
      printf("***** ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS *****\n");
      printf("Carta 1 - %s: %d\n", nome_cidade_1, pts_turisticos_1);
      printf("Carta 2 - %s: %d\n", nome_cidade_2, pts_turisticos_2);
      if(pts_turisticos_1 == pts_turisticos_2) {
        printf("Empatou!\n");
      } else if(pts_turisticos_1 > pts_turisticos_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      }
      break;
    case 6:
      printf("***** ATRIBUTO: DENSIDADE POPULACIONAL *****\n");
      printf("Carta 1 - %s: %.2f\n", nome_cidade_1, densidade_populacional_1);
      printf("Carta 2 - %s: %.2f\n", nome_cidade_2, densidade_populacional_2);
      if(densidade_populacional_1 == densidade_populacional_2) {
        printf("Empatou!\n");
      } else if(densidade_populacional_1 < densidade_populacional_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      }
      break;
    default:
      printf("Opção inválida!");
  }

  return 0;
}