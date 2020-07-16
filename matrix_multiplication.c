#include <stdio.h>
int main()
{
/******* MAtrix 1 *****************************************************************************/
	int r1,c1,i1,j1,k1,l1;
	printf("Enter number of rows and columns for 1st matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("%d x %d",r1,c1);
	int mat1[r1][c1];
/******* MAtrix 2 *****************************************************************************/
    int r2,c2,i2,j2,k2,l2;
	printf("\nEnter number of rows and columns for 2nd matrix: ");
	scanf("%d%d",&r2, &c2);
	printf("%d x %d",r2,c2);
	int mat2[r2][c2];
//** Number of columns of 1st matrix should be equal to the number of rows to 2nd matrix i.e. c1 = r2
    for(;c1 != r2;)
    {
        printf("\nError! Number of columns of 1st matrix should be equal to the number\nof rows to 2nd matrix i.e. c1 != r2\n");	
   	    printf("Enter number of rows and columns for 1st matrix: ");
   	    scanf("%d%d",&r1, &c1);
   	    printf("\nEnter number of rows and columns for 2nd matrix: ");
	    scanf("%d%d",&r2, &c2);
	}
// Storing elements of 1st matrix.**********************************************************
	printf("\nNow enter enteries in the %d x %d 1st matrix\n",r1,c1);
	for(i1=0;i1<r1;i1++)
	{
		printf("Enter %d row: ",i1+1);
		for(j1=0;j1<c1;j1++)
			scanf("%d",&mat1[i1][j1]);
	}
//display of 1st matrix**********************************************************************
	printf("The 1st %d x %d matrix is\n",r1,c1);
	
	for(k1=0;k1<r1;printf("\n"),k1++)
	{
		printf("|");
		for(l1=0;l1<c1;l1++)
		{
			printf("%3d",mat1[k1][l1]);
			printf("\t");
		}
		printf("|");
	}	
// Storing elements of second matrix.***********************************************************
	printf("Now enter enteries in the %d x %d 2nd matrix\n",r2,c2);
	for(i2=0;i2<r2;printf("\n"),i2++)
	{
		printf("Enter %d row: ",i2+1);
		for(j2=0;j2<c2;j2++)
			scanf("%d",&mat2[i2][j2]);
	}
//display of 2nd matrix**********************************************************************	
	printf("The 2nd %d x %d matrix is\n",r2,c2);
	for(k2=0;k2<r2;printf("\n"),k2++)
	{
		printf("|");
		for(l2=0;l2<c2;l2++)
		{
			printf("%3d",mat2[k2][l2]);
			printf("\t");
		}
		printf("|");
	}
// Multiplication Matrix*********************************************************************
// Initializing all elements of result matrix to 0
    int mat3[r1][c2];
  	int i3,j3;
	for(i3=0;i3<r1;i3++)
	{
		for(j3=0;j3<c2;j3++)
		   mat3[i3][j3] = 0;
	}	
// Storing elements of resultant matrix.**********************************************************
	int i4,j4,k4;
	for(i4=0;i4<r1;i4++)
	{
		for(j4=0;j4<c2;j4++)
		{
			for(k4=0;k4<c1;k4++)
			   mat3[i4][j4] = mat3[i4][j4] + (mat1[i4][k4]*mat2[k4][j4]); // matrix multiplication formula
		}
	}
//display of resultante matrix**********************************************************************	
	int i5,j5;
	printf("\n\nResultante matrix (1st matrix).(2nd matrix) is\n");
	for(i5=0;i5<r1;printf("\n"),i5++)
	{
		printf("|");
		for(j5=0;j5<c2;j5++)
		{
			printf(" %3d",mat3[i5][j5]);
			//printf("\t");
		}
		printf("|");
	}
	
	return 0;
}
