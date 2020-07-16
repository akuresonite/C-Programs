#include <stdio.h>
int main(void){
    int rows,k,i,j;
    printf("Enter num of rows:");
    scanf("%d",&rows);
    for(;;k++)
    {
    	for(i=1;i<=rows;i++)
        {
        for(j=1;j<=i;j++)
         {
            printf("* ");
         }
        printf("\n"); 
        }
        for(i=rows;i>=1;i--)
        {
        for(j=1;j<i;j++)
         {
            printf("* ");
         }
        printf("\n"); 
        }
	 if(k==2)
	  goto end;
	}
 end:
      printf("Bye");   
return 0;
}
