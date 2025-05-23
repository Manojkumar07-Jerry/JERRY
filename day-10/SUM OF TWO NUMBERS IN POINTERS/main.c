#include<stdio.h>
int main() {
    int a = 10, b = 20;
    int *ptr1 = &a; 
    int *ptr2 = &b; 
    int sum = *ptr1 + *ptr2;
    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, sum);
    return 0;
}