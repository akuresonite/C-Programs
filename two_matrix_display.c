#include<stdio.h>
void main()
{
	int i,j;
	int mat1[4][4] = 
	{
	  {11,12,13,14},
	  {21,22,23,24},
	  {31,32,33,34},
	  {41,42,43,44}
	};
	int mat2[4][4] = 
	{
	  {51,52,53,54},
	  {61,62,63,64},
	  {71,72,73,74},
	  {81,82,83,84}
	};
	
  for(i=0,printf("   matrix A ; "),printf("     matrix B ; \n");i<4;printf("\n"),i++)
  {
  	printf("|");
  	for(j=0;j<4;j++)
  	{
  		printf("%3d",mat1[i][j]);
    }
    printf("|\t");
/*********matrix-2***********************/    
    printf("|");
  	for(j=0;j<4;j++)
  	{
  		printf("%3d",mat2[i][j]);
    }
    printf("|");
  }
  
  
}

