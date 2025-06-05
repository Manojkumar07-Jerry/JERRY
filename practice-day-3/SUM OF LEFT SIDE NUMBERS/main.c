#include <stdio.h>
int main() {
    int n,sum=0,temp;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++) {
     temp=array[i];
    array[i]=sum;
    sum+=temp;
    }
    for(int i=0;i<n;i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
