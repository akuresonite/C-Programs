#include <stdio.h>
int main(void)
{   int rows,i,space,k; 
    printf("Enter num of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;(space<=rows-i);space++)
         printf("  ");
         
        for(k=0;k!=2*i-1;k++) 
         printf("+ ");

      printf("\n");   
    }
    
return 0;
}
