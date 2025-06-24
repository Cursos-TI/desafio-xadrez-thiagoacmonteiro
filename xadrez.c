#include <stdio.h>

void move_torre(int num_movimentos_torre) {
  printf("Movendo a torre %d vezes\n\n", num_movimentos_torre);

  for (int i = 0; i < num_movimentos_torre; i++) {
    printf("Direita\n");
  }
}

void move_bispo(int num_movimentos_bispo) {
  int posicao_inicial = 0;

  printf("\nMovendo o bispo %d vezes\n\n", num_movimentos_bispo);

  do {
    printf("Cima, Direita\n");
    posicao_inicial++;
  } while (posicao_inicial < num_movimentos_bispo);  
}

void move_rainha(int num_movimentos_rainha) {
  int posicao_inicial = 0;

  printf("\nMovendo a rainha %d vezes\n\n", num_movimentos_rainha);

  while (posicao_inicial < num_movimentos_rainha) {
    printf("Esquerda\n");
    posicao_inicial++;
  }
}

int main() {
  int num_movimentos_torre, num_movimentos_bispo, num_movimentos_rainha;

  move_torre(5);
  move_bispo(5);
  move_rainha(8);

  return 0;
}
