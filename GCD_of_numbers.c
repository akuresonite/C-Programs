#include <stdio.h>
int main()
{
	int n1,n2,i,gcd,N1,N2;
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	N1=n1;
	N2=n2;
/*	for(i=1;i <= n1 && i <= n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		  gcd = i;
	}
	printf("Greatest Common Divisor of %d and %d is %d.",n1,n2,gcd);
*/
	n1=(n1>0)?n1:-n1;
	n2=(n2>0)?n2:-n2;
	while(n1!=n2)
	{
		if(n1>n2)
		  n1-=n2;
		else
		  n2-=n1;  
	}
    printf("Greatest Common Divisor of %d and %d is %d.",N1,N2,n1);

	return 0;
}
