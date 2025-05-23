#include<stdio.h>
int main(){
    int a=1;
    int*p1,**p2,***p3,****p4;
    p1=&a;
    p2=&p1;
    p3=&p2;
    p4=&p3;
    printf("\n%d",&p4);
        printf("\n%d %d",p4,&p3);
        printf("\n%d %d %d",*p4,p3,&p2);
        printf("\n%d %d %d %d",****p4,*p3,p2,&p1);
                printf("\n%d %d %d %d %d",***p4,**p3,*p2,p1,&a);
                 printf("\n%d %d %d %d %d",****p4,***p3,**p2,*p1,a);


}