
#include<stdio.h>
int main()
{
    int a, b, temp;
    a=5;
    b=6;
    temp=a;
    a=b;
    b=temp;
    printf("value of a= :%d\n", a);
    printf("value of b= :%d\n", b);
    return 0;
}