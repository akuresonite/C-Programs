#include <stdio.h>
int main(void){
    int rows,k,i,j,loop=1;
    printf("Enter num of rows:");
    scanf("%d",&rows);
    printf("Enter num of loops:");
    scanf("%d",&loop);
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
	 if(k==loop)
	  goto end;
	}
 end:
      printf("Bye");   
return 0;
}
