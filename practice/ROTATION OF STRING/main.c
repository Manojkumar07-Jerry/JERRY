#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int n;
    printf("Enter the number of rotations: ");
    scanf("%d", &n);
    printf("Enter the string: ");
    scanf("%s", str);
    int len = strlen(str);
    n = n % len; 
    for (int i = 0; i < n; i++) {
        char temp = str[0];  
        for (int j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];  }
        str[len - 1] = temp; 
    }
    printf("Rotated string: %s\n", str);
    return 0;
}
