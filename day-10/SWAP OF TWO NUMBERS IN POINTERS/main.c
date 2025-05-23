#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 6;
    printf("Before swapping : \n");
    printf("x = %d, y = %d \n", x, y);
    swap(&x, &y);
    printf("After swapping : \n");
    printf("x = %d, y = %d \n", x, y);
}