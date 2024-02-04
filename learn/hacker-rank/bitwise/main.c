#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>

int *to_biner(int a) {

  int *biner = malloc(10 * sizeof(int));

  for (int i = 9; i > 0; i--) {
    biner[i] = a % 2;
    a = a / 2;
  }
  return biner;
}

int to_decimal(int *n) {
  int des_arr[10] = {0, 0, 128, 64, 32, 16, 8, 4, 2, 1};
  int dec = 0;

  for (int i = 9; i > 0; i--) {
    if (n[i] == 1) {
      printf("fr : %d", n[i]);
      dec += des_arr[i];
    }
  }
  return dec;
}

void calculate_the_maximum(int n, int k) {
  int *biner_n = to_biner(n);
  int *biner_k = to_biner(k);
  int and_op[10], or_op[10], xor_op[10];

  for (int i = 9; i > 0; i--) {
    if (biner_n[i] == 1 && biner_k[i] == 1) {
      and_op[i] = 1;
    }
    if (biner_n[i] == 1 || biner_k[i] == 1) {
      or_op[i] = 1;
    }
  }

  printf("\nand \n");
  for (int i = 0; i < 10; i++) {
    printf("%d", and_op[i]);
  }
  printf("\nor \n");
  for (int i = 0; i < 10; i++) {
    printf("%d", or_op[i]);
  }
  printf("\nxor \n");
  for (int i = 0; i < 10; i++) {
    printf("%d", xor_op[i]);
  }
  printf("\n");

  int des_and = to_decimal(and_op);
  int des_or = to_decimal(or_op);
  int des_xor = to_decimal(xor_op);
  printf("\n des_and %d\n", des_and);
  printf("des_or  %d\n", des_or);
  printf("des_xor  %d\n", des_xor);
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return 0;
}
