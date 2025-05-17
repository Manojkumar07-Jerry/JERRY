#include <stdio.h>

int main() {
  float principal, rate, time, simpleInterest;

  // Get input from the user
  printf("Enter principal amount: ");
  scanf("%f", &principal);
  printf("Enter rate of interest: ");
  scanf("%f", &rate);
  printf("Enter time (in years): ");
  scanf("%f", &time);

  // Calculate simple interest
  simpleInterest = (principal * rate * time) / 100;

  // Print the result
  printf("Simple Interest = %.2f\n", simpleInterest);

  return 0;
}