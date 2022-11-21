/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

void hanoi(int n,int source,int destination, int inter)
{
    if(n==1)
    {
        printf("move disc from %d to %d\n",source,destination);
        
    }
    else
    {
        hanoi(n-1,source, inter,destination);
        printf("move disc from %d to %d\n",source,destination);
        hanoi(n-1,inter,destination,source);
    }
}    
int main(void)
{
    int h=3;
    printf("solution for %d discs\n",h);
    hanoi(h,1,3,2);
    return 0;
    
}