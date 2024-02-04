#include <stdio.h>
#include <strings.h>

int index_of_char(char arra[], char val) {
  for (int i = 0; arra[i] != '\0'; i++)
    if (arra[i] == val)
      return i;
  return -1;
}

int indexAint(int arra[], int val, int size) {
  for (int i = 0; i <= size; i++)
    if (arra[i] == val)
      return i;
  return -1;
}

int indexAntLast(int arra[], int val, int size) {
  for (int i = size - 1; i >= 0; i--)
    if (arra[i] == val)
      return i;
  return -1;
}

int main() {
  int arr[] = {0, 0, 0, 1, 0, 0, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++) {
    if (indexAint(arr, arr[i], size) == indexAntLast(arr, arr[i], size)) {
      printf("unik number : %d\n", arr[i]);
    }
  }
  return 0;
}
