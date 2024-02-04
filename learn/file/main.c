#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {

  FILE *file = fopen("sample.txt", "r");

  char content[100];

  int arr[10];

  while (fgets(content, sizeof(content), file)) {
    int len = strlen(content);
    for (int i = 0; i < len; i++) {
      if (isdigit(content[i])) {
        printf("%c\n", content[i]);
        arr[i] = content[i];
      }
    }
  }

  int lenar = (sizeof arr / sizeof arr[0]);
  for (int i = 0; i < lenar; i++) {
    printf("%d", arr[i]);
  }
}
