
#include<stdio.h>
int main(){
    int year=2000;
    if((year%4==0)&&(year%100!=0))
    printf("It is leap year:%d",year);
    else
    printf("It is not a leap year");
    
}