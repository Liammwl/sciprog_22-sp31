/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main(void){
    int N=12,i;
    float a=0.0, b_deg=60.0;
    float b_rad, area, mult_rad;
    
    //convert b_deg=pi/3 to radians
    b_rad=(M_PI * b_deg)/180.0;
    printf("pi/3 in Radians=%f\n",b_rad);
    
    /*Sum tan(a)+tan(b)*/
    area=tan(a)+tan(b_rad);
    for(i=5;i<60;i=i+5){
        area=area+2*tan((M_PI*i)/180.0);
    }
    
    //multiply partial area by (pi/3)/(2*12)
    mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
    area=mult_rad*area;
    
    printf("Approximated=%f,Exact=%f\n",area,log(2.0));
    
    return 0;
    
    
    
    
    
    
}