/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_FILE_NAME 100

int get_num_lines(char filename[MAX_FILE_NAME]){
    FILE *fp;
    fp=fopen(filename,"r");
    int ch_read;
    int count=0;
    while((ch_read=fgetc(fp))!=EOF)
    {
        if (ch_read=='\n')
        {
            count++;
        }
    }
    printf("Number of lines is %d\n",count);
    fclose(fp);
    return count;
}

int main(void)
{
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("enter file name please:");
    scanf("%s",filename);
    
    //get number of lines
    int n=get_num_lines(filename);
    
    f=fopen(filename,"r");
    
    int i;
    int **magicsquare=malloc(n*sizeof(int *));
    for (i=0;i<n;i++)
    {
        magicsquare[i]=malloc(n*sizeof(int));
        
    }
    int j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(f,"%d",&magicsquare[i][j]);
        }
    }
    int flag=isMagicSquare(magicsquare,n);
    if (flag==1)
    {
        printf("this square is magic!\n");
    }
    else
    {
        printf("not magic");
    }
    free(magicsquare);
    fclose(f);
    return 0;
}
int isMagicSquare(int **square, const int n){
    if(n<0){
        return 0;
    }
    int magic_num=0;
    int off_diag_sum=0;
    int i,j;
    for(i=0;i<n;i++){
        
        magic_num+=square[i][i];
        off_diag_sum+=square[i][n-i-1];
        
    }
    if(off_diag_sum!=magic_num){
        printf("the off_diag is not the same as the diag\n");
        printf("the off_diag is not the same as the diag\n");
        
        return 0;
    }
    for(i=0;i<n;i++){
        int rowSum=0;
        int colSum=0;
        for(j=0;j<n;j++){
            rowSum+=square[i][j];
            colSum+=square[j][i];
            
        }
        if (rowSum!=magic_num||colSum!=magic_num){
            return 0;
        }
        
        
        
        
        
        
    }
    return 1;
    
}