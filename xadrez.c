#include <stdio.h>

void move_torre(int num_movimentos_torre) {
  if (num_movimentos_torre > 0) {
    printf("Direita\n");
    move_torre(num_movimentos_torre - 1);
  }
}

void move_bispo(int num_movimentos_bispo) {
  if (num_movimentos_bispo > 0) {
    // Utiliza cima para controlar a quantidade de movimentos verticais e direita para horizontais
    // O loop externo controla a quantidade de movimentos verticais
    for (int cima = 0; cima < 1; cima++) {
      printf("Cima\n");
      // O loop interno controla a quantidade de movimentos horizontais
      for (int direita = 0; direita < 1; direita++) {
        printf("Direita\n");
      }
    }
    move_bispo(num_movimentos_bispo - 1);
  }
}

void move_rainha(int num_movimentos_rainha) {
  if (num_movimentos_rainha > 0) {
    printf("Esquerda\n");
    move_rainha(num_movimentos_rainha - 1);
  }
}

void move_cavalo(int num_movimentos_cavalo) {
  if (num_movimentos_cavalo > 0) {
    // Utiliza cima para controlar a quantidade de movimentos verticais e direita para horizontais
    // A condição do loop é baseada na quantidade de movimentos restantes
    // O loop continua enquanto houver movimentos verticais ou horizontais a serem feitos
    for (int cima = 0, direita = 0; cima < 2 || direita < 1; cima < 2 ? cima++ : direita++) {
      cima < 2 && direita == 0 ? printf("Cima\n") : printf("Direita\n");
    }
    move_cavalo(num_movimentos_cavalo - 1);
  }
}

int main() {
  int num_movimentos_torre = 5, num_movimentos_bispo = 5, num_movimentos_rainha = 8, num_movimentos_cavalo = 2;

  printf("Movendo a torre %d vezes\n\n", num_movimentos_torre);
  move_torre(num_movimentos_torre);
  
  printf("\nMovendo o bispo %d vezes\n\n", num_movimentos_bispo);
  move_bispo(num_movimentos_bispo);

  printf("\nMovendo a rainha %d vezes\n\n", num_movimentos_rainha);
  move_rainha(num_movimentos_rainha);

  printf("\nMovendo o cavalo %d vezes\n\n", num_movimentos_cavalo);
  move_cavalo(num_movimentos_cavalo);

  return 0;
}
