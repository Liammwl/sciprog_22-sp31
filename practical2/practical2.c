/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void){
    int i;
    float sum1, sum2, diff;
    sum1=0.0;
    for(i=1;i<=1000;i++){
        sum1=sum1+1.0/(float)i;
        
    }
    float tmp;
    sum2=0.0;
    for(i=1000;i>0;i--){
        tmp=i;
        sum2=sum2=1.0/tmp;
        
    }
    printf("Sum1=%f\n",sum1);
    printf("Sum2=%f\n",sum2);
    
    diff=sum1-sum2;
    printf("difference between the two is %f\n",diff);
    
}