#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int n;
  scanf("%d", &n);
  int arr[n * 2][n * 2];
  for (int i = n; i >= 1; i--) {
    for (int j = n; j >= 1; j--) {
      printf("%d ", (i > j) ? i : j);
    }
    printf("\n");
  }
  return 0;
}
