
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    int count=0;
    while(x>=0){
        x=x/10;
        count++;
    }
    printf("%d",count);
    x=y;
    int sum=0;
    for(int j=1;j<=count;j++){
    int r=x%10;
    int prod=1;
    for(int i=1;i<=count;i++){
    prod=prod+r;
    }
    sum=prod;
    x/=10;
}
printf("%d",sum);
if(y==sum){
printf("armstrong number");
}else
printf("not an armstrong number");
}
