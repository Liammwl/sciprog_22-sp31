/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void){
    int n=5,p=3,q=4;
    double A[n][p],B[p][q],C[n][q];
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j]=i+j;
        }
    }
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j]=i-j;
            
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j]=0.0;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<q;i++){
            for(k=0;k<q;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
                
            }
        }
    }
    
    printf("\nThis is matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%3.0f", A[i][j]);
        }
        printf("\n");
    }
    printf("\nThis is matrixB:\n");
    for(j=0;j<p;i++){
        for(j=0;j<p;j++){
            printf("%3.0f",  B[i][j]);
        }
        printf("\n");
    }
    printf("\nThis is matrixC:\n");
    
    
}