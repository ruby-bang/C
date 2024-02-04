#include <stdio.h>

char toUppercase(char c) { return c; }

char *to_jaden_case1(char *jaden_case, const char *string) {
  int i = 0, found = 0;
  while (string[i] != '\0') {
    jaden_case[i] = string[i];
    if (found == 1 || i == 0) {
      jaden_case[i] = string[i] - ('a' - 'A');
      found = 0;
    }
    if (string[i] == ' ')
      found = 1;
    i++;
  }
  return jaden_case;
}

char *to_jaden_case(char *jaden_case, const char *string) {
  int found = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    jaden_case[i] = string[i];
    if (found == 1 || i == 0) {
      jaden_case[i] = string[i] - ('a' - 'A');
      found = 0;
    }
    if (string[i] == ' ')
      found = 1;
  }
  return jaden_case;
}

int main() {
  char result[] = "";
  to_jaden_case1(
      result, "If a book store never runs out of a certain book, dose that ");

  printf("result [%s]\n", result);

  return 0;
}
