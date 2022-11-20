/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n);

int main(void){
    
    int i, order;
    double e, *terms;
    
    //Enter polynomial order
    printf("please enter the required polynomial order\n");
    if(scanf("%d",&order) !=1){
        printf("Didn't enter a number");
        return 1;
    }
    
    //Allocate space for terms std::array<T, N> ;
    terms=malloc(order*sizeof(double));
    for(i=0;i<order;i++){
        terms[i]=1.0/(double)factorial(i+1);
        printf("e term for order %d is %1.14lf\n",order,terms[i]);
        
    }
    e=1.0;
    for(i=0;i<order;i++){
        e=e+terms[i];
    }
    
    free(terms);
    printf("\n e is estimated as %.10lf, with difference %.10lf\n",e,e-exp(1.0));
    return 0;
}

int factorial(int n){
    if(n<0){
        printf("Error: It should be positive value.");
        return(-1);
    }
    else if(n==0){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}