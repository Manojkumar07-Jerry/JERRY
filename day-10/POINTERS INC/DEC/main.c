#include<stdio.h>
int main(){
int a=10,b=20;
int *it,*csa;
it=&a;
csa=&b;
++a;
--b;
++*it;
--*csa;
    printf("%d %d",a,b);
    printf("\n%d %d",&a,&b);
     printf("\n%d %d",it,csa);
     printf("\n%d %d",&it,&csa);
     printf("\n%d %d",*it,*csa);
}