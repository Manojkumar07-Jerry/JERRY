/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}