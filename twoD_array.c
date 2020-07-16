#include<stdio.h>
void main()
{
	int i,j;
	int matrix[4][4] = 
	{
	  {11,12,13,14},
	  {21,22,23,24},
	  {31,32,33,34},
	  {41,42,43,44}
	};

  for(i=0;i<4;printf("\n"),i++)
  {
  	printf("|");
  	for(j=0;j<4;j++)
  	{
  		printf("%3d",matrix[i][j]);
    }
    printf("|");
  }
    
}

