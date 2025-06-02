#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int specialCharCount = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
    if (!isalnum(str[i])) {
    specialCharCount++;
    }
    }
    printf("Number of special characters: %d\n", specialCharCount);
    return 0;
}
