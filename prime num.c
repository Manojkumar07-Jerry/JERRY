
#include<stdio.h>
#include<string.h>
int main(){
    int x=7;
    if(x<=1){
        printf("%d is not prime number",x);
        return 0;
    }
    int flag=0;
    for(int i=1;i<=x;i++)
    if(x%i==0)
    flag++;
    if(flag==2)
    printf("%d is prime number",x);
    else
    printf("%d is not a prime number",x);
    }