#include <stdio.h>
#include <ctype.h> 
int main() {
    char ch;
    int upperCount=0,lowerCount=0;
    printf("Enter a string:\n");
    while((ch = getchar())!= '\n'){
        if (isupper(ch)) {
            upperCount++;  
      } else if (islower(ch)) {
            lowerCount++;
      }
    }
    printf("Uppercase letters:%d\n",upperCount);
    printf("Lowercase letters:%d\n",lowerCount);
    return 0;
}
