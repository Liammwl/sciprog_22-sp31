/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main(){
    int a, b,ierror;
    printf("please input two positive integers:\n");
    ierror=scanf("%d %d", &a,&b);
    if(ierror !=2){
        printf("please enter two integers\n");
        return 1;
    }
    
    if(a<=0 || b<=0){
        printf("not positive\n");
        return 1;
    }
    //Call the functions
    printf("iterativeGCD(%d,%d)=%d\n",a,b,iterativeGCD(a,b));
    printf("recursiveGCD(%d,%d)=%d\n",a,b,recursiveGCD(a,b));
    
    
    return 0;
}
int iterativeGCD(int a, int b){
    int temp;
    while(b !=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int recursiveGCD(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return(recursiveGCD(b,a%b));
    }
    
    
    
    
    
}