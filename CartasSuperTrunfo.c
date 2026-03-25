#include <stdio.h>
#include <string.h>

int main(){

// CARTA 1
  char estado1;
  char codigo1[10];
  char saopaulo1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontost1;


  // CARTA 2
  char estado2;
  char codigo2[10];
  char riodejaneiro2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontost2;

  int opcao;

  // CADASTRO CARTA 1

  printf("CADASTRO CARTA 1\n");
  printf("estado1:");
  scanf("%c", &estado1);

  printf("codigo1:");
  scanf("%s", codigo1);

  printf("saopaulo1:");
  scanf("%s", saopaulo1);

  printf("populacao1:");
  scanf("%d", &populacao1);

  printf("area1:");
  scanf("%f", &area1);

  printf("pib1:");
  scanf("%f", &pib1);

  printf("pontost1:");
  scanf("%d", &pontost1);

  // CADASTRO CARTA 2

  printf("CADASTRO CARTA 2\n");
  printf("estado2:");
  scanf(" %c", &estado2); // Note the space before %c to consume

  printf("codigo2:");
  scanf("%s", codigo2);

  printf("riodejaneiro2:");
  scanf("%s", riodejaneiro2);

  printf("populacao2:");
  scanf("%d", &populacao2);

  printf("area2:");
  scanf("%f", &area2);

  printf("pib2:");
  scanf("%f", &pib2);

  printf("pontost2:");
  scanf("%d", &pontost2);

  return 0;

















}
