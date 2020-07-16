#include <stdio.h>
#include <math.h>
   int main()
{
 	long long base,z;
    int exp;
 
	printf("Enter base number and exponent: ");
    scanf("%lld %d",&base,&exp);

 	//z=pow(base,exp);
 	printf("%lld",pow(base,exp));
}
