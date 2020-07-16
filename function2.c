#include <stdio.h>
double divide(double a, double b) //function decleration
 { return(a/b); }


int main()
{
	double i,j,result;
	printf("Enter two num:");
	scanf("%lf%lf",&i,&j);
	
	result = divide(i,j); //function call
	printf("The result is %lf",result);
	
	return 0;
}

