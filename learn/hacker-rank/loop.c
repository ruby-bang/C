#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int hasil = 0;
  while (n > 0) {
    int len = n % 10;
    hasil += len;
    printf("%d\n", len);
    n /= 10;
  }
  printf("%d\n", hasil);
  return 0;
}
