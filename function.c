#include <stdio.h>
int add(int a, int b) //function decleration
 {  return(a+b);  }


int main()
{
	int i,j,result;
	printf("Enter two num:");
	scanf("%d%d",&i,&j);
	
	result = add(i,j); //function call
	printf("The result is %d",result);
	
	return 0;
}

