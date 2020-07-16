#include <stdio.h>
int main(void){
	int i,j;
	char alpha='A',input;
	printf("Enter the uppercase character you ");
	printf("want to print in last row:");
	input=getchar();
	for(i=1;i<=(input-'A'+1);i++) //********* (input-'A'+1)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",alpha);
		}
	  printf("\n");
	  alpha++;
	}
 return 0;
}
