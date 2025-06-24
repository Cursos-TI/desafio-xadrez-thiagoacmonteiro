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
  printf("\nMovendo a rainha %d vezes\n\n", num_movimentos_rainha);

  while (num_movimentos_rainha--) {
    printf("Esquerda\n");
  }
}

void move_cavalo(int num_movimentos_cavalo) {
  printf("\nMovendo o cavalo %d vezes\n\n", num_movimentos_cavalo);

  while (num_movimentos_cavalo--) {
    for (int i = 0; i < 2; i++) {
      printf("Baixo\n");
    }

    printf("Esquerda\n");
  }
}

int main() {
  int num_movimentos_torre = 5, num_movimentos_bispo = 5, num_movimentos_rainha = 8, num_movimentos_cavalo = 2;

  move_torre(num_movimentos_torre);
  move_bispo(num_movimentos_bispo);
  move_rainha(num_movimentos_rainha);
  move_cavalo(num_movimentos_cavalo);

  return 0;
}
