#include <stdio.h>

int marks_summation(int *marks, int number_of_students, char gender) {
  return gender == 'g'             ? marks[1] + marks[3]
         : number_of_students <= 1 ? 0
         : gender == 'b'           ? marks[0] + marks[2]
                                   : 0;
}

int main() {
  int number_of_students = 9;
  char gender;
  int sum;

  int marks[] = {
      645, 105, 88, 747, 23, 160, 681, 254, 46,
  };

  sum = marks_summation(marks, number_of_students, 'b');
  printf("resultt : %d\n", sum);
  return 0;
}
