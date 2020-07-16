#include <stdio.h>
int main()
{
	int r,c,i,j,k,l;
	printf("Enter number of rows and columns: ");
	scanf("%d%d",&r, &c);
	int a[r][c];
	printf("\nNow enter enteries in the %d x %d matrix\n\n",r,c);
	
	for(i=0;i<r;printf("\n"),i++)
	{
		printf("Enter %d row: ",i);
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The %d x %d matrix is\n",r,c);
	
	for(k=0;k<r;printf("\n"),k++)
	{
		printf("|");
		for(l=0;l<c;l++)
		{
			printf("%3d",a[k][l]);
		}
		printf("|");
	}
	return 0;
}
