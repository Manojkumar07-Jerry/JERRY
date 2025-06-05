/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
   #include <stdio.h>

int main()
{
    int n,odd=0,even=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
     if(array[i]%2==0){
           even++;
     }
           else{
               odd++;
           }
    }
    printf("Odd=%d\nEven=%d",odd++,even++);
    return 0;
}

   