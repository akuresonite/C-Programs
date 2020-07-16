#include<stdio.h>
void main()
{
	int i,j;
	int mat1[2][2] = 
	{
	  {11,12},
	  {21,22}
	};
	int mat2[2][2] = 
	{
	  {51,52},
	  {61,62}
	};
	
  for(i=0,printf("   matrix A ; "),printf("     matrix B ; \n");i<2;printf("\n"),i++)
  {
  	printf("|");
  	for(j=0;j<2;j++)
  	{
  		printf("%3d",mat1[i][j]);
    }
    printf("|\t");
/*********matrix-2***********************/    
    printf("|");
  	for(j=0;j<2;j++)
  	{
  		printf("%3d",mat2[i][j]);
    }
    printf("|");
  }
  printf("\n\n");
   
   int a00,a01,a10,a11;
   int i1,j1;
   
   a00=((mat1[0][0]*mat1[0][0])+(mat1[0][1]*mat1[1][0]));
   a01=((mat1[0][0]*mat1[0][1])+(mat1[0][1]*mat1[1][1]));
   a10=((mat1[1][0]*mat1[0][0])+(mat1[1][0]*mat1[0][1]));
   a11=((mat1[1][1]*mat1[1][0])+(mat1[1][1]*mat1[1][1]));
/********REsultant matrix**********************************/
   int mat3[2][2]={
     {a00,a01},
     {a10,a11},
   };
   
   for(i1=0;i1<2;printf("\n"),i1++)
  {
  	printf("|");
  	for(j1=0;j1<2;j1++)
  	{
  		printf("%3d\t",mat3[i1][j1]);
    }
    printf("|");
  }
  
     
   
}

