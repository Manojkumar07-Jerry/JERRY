
#include<stdio.h>
#include<string.h>
int main(){
    char username[20]="brindha";
    int password=13570;
    char arr[20];
    int x;
    scanf("%s",arr);
    scanf("%c",&x);
    if((strcmp(username,arr)==0)&& (password==x))
    printf("login successful");
    else
    printf("failed !!!!");
}