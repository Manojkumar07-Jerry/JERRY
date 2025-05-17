
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    for(int i=1;i<=x;i++){
        printf("%d*%d=%d\n",i,y,i*y);
    }
}
