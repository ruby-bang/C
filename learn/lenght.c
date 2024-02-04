#include <stdio.h>
#include <string.h>

void say_hello(char nama[]);

int main() {
  char nama[] = "ruby alfahad";

  int len1 = strlen(nama);

  say_hello(nama);
  printf("panjang : %d\n", len1);
  for (int i = 0; i < len1; i++) {
    if (nama[i] != ' ') {
      printf("%c", nama[i]);
    }
  }
  printf("\n");

  int tes[] = {1, 2};
  int combine = tes[0] * 10 + tes[1];
  printf("%d\n", combine);
  return 0;
}

void say_hello(char nama[]) { printf("hallo %s\n", nama); }
