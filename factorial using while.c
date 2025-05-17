
#include<stdio.h>
int main(){
    int x;
    int factorial=1;
    scanf("%d",&x);
    while(x>=2){
        factorial*=x;
        x--;
    }
    printf("factorial:%d",factorial);
}
