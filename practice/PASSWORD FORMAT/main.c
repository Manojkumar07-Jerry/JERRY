#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Password format: ");
    for (int i = 0; i < len; i++) {
    printf("*");
    }
    printf("\n");
    return 0;
}
