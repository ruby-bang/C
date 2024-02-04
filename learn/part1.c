#include <stdio.h>

void f(int i) { printf("%d\n", i); }

int main() {
  int n = 4, result = 0;
  for (int i = 1; i <= n; i++) {
    result += 3 * i + 2;
    f(result);
  }
  return 0;
}
