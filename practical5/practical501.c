/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

void fibonacci(int *a, int *b);

int main()
{
    int n ,i;
    int f1=1,f0=0;
    printf("enter a positive integer n\n");
    scanf("%d",&n);
    
    if(n<1){
        printf("the number is not positive \n");
        exit(1);
    }
    printf("the fibonacci sequence is: \n");
    printf("%d,%d,", f0,f1);
    for(i=2;i<=n;i++){
        fibonacci(&f1,&f0);
        printf("%d, ",f1);
        
        if(((i+1)%10)==0) printf("\n");
    }
    return 0;
}

void fibonacci(int *a, int *b){
    int next;
    next=*a+*b;
    
    *b=*a;
    *a=next;
}






