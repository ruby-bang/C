#include <stdio.h>
#include <string.h>

void pritli(char word[]) { printf("%s\n", word); }

int check_login(char usernama[]) {
  int result = strcmp("ruby", usernama);
  printf("%d", result);
  if (result == 0) {
    return 1;
  }
  return 0;
}
int main() {
  char nama[] = "ruby";
  pritli(nama);
  int x = check_login(nama);

  printf("%d\n", x);
  return 0;
}
