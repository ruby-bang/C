#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char toUpperCase(char ch) { return ch - ('a' - 'A'); }

int isUperr(char ch) {
  if ((ch >= 'A' && ch <= 'Z')) {
    return 0;
  } else {
    return 1;
  }
}
int isAlpabet(char ch) {
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    return 0;
  } else {
    return 1;
  }
}

void push(int *arr, int *size, int element) {
  arr[*size] = element;
  int es = 10;

  (*size)++;
}

void to_camel_case(const char *text, char *camel) {
  int len = strlen(text);

  int index[100];
  int size = 0;
  for (int i = 0; i < len; i++) {
    if (isAlpabet(text[i]) == 1) {
      push(index, &size, i);
    }
  }
  push(index, &size, len - 1);

  int n = 0;
  int last_index = 0;

  for (int k = 0; k < index[0]; k++) {
    camel[k] = text[k];
  }
  for (int i = 0; i < size; i++) {
    int indx = index[i];
    int buf = indx - n;
    int last = 0;
    if (index[i + 1] >= index[size - 1]) {
      last = len + 1 + 1;
    } else {
      last = index[i + 1 + n];
    };
    for (int j = buf; j < last; j++) {
      if (j == buf) {
        if (isUperr(text[j + 1 + n]) == 1) {
          camel[j] = toUpperCase(text[j + 1 + n]);
        } else {
          camel[j] = text[j + 1 + n];
        }
      } else {
        camel[j] = text[j + 1 + n];
      }
    }
    n = 1;
    last_index += 1;
  }
  camel[len - last_index + 1] = '\0';
}

int main() {
  char *camel = calloc(0, sizeof(char));

  to_camel_case("ruby-roschild-bujet", camel);
  printf("%s\n", camel);
  return 0;
}
