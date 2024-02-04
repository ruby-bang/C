#include <stdio.h>

int main() {
  char num_as_str[9][10] = {"one", "two",   "three", "four", "five",
                            "six", "seven", "eight", "nine"};
  int input1 = 0;
  int input2 = 0;
  scanf("%d", &input1);
  scanf("%d", &input2);

  int len = (sizeof num_as_str / sizeof num_as_str[0]);

  for (int i = input1; i <= input2; i++) {

    if (i > len) {
      if (i % 2 == 0) {
        printf("even\n");
      } else {
        printf("odd\n");
      }
    } else {
      printf("%s\n", num_as_str[i - 1]);
    }
  }
  return 0;
}
