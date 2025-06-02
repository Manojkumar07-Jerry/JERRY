#include <stdio.h>
int main() {
    char str[100],ch;
    int found=0;
    printf("Enter a character to search: ");
    scanf("%c",&ch);
    getchar(); 
    printf("Enter a string: ");
    scanf("%99s",str);
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]==ch) {
            found=1;
            break; 
        }
    }
    if (found) {
        printf("Present\n");
    } else {
        printf("Not Present\n");
    }
    return 0;
}
