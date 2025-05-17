
#include <stdio.h>

int main() {
    int n, i;
    long long trib[100];

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    trib[0] = 0;
    trib[1] = 0;
    trib[2] = 1;

    for (i = 3; i < n; i++) {
        trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
    }
   
    printf("Tribonacci Sequence: ");
    for (i = 0; i < n; i++) {
        printf("%lld ", trib[i]);
    }
    printf("\n");
    return 0;
}