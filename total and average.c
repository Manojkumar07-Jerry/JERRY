#include <stdio.h>

int main() {
  int marks[5];
  int total = 0;
  float average;
  int i;

  printf("Enter marks for 5 subjects:\n");
  for (i = 0; i < 5; i++) {
    printf("Subject %d: ", i + 1);
    scanf("%d", &marks[i]);
    total += marks[i];
  }

  average = (float)total / 5;

  printf("Total marks: %d\n", total);
  printf("Average marks: %.2f\n", average);

  return 0;
}