#include <stdio.h>
int main(void)
{
long long base;
int exp;
long long result=1;
printf("Enter base number and exponent: ");
scanf("%lld %d",&base,&exp);
while(exp!=0)
{
	result = result*base;
	exp--;
}
printf("Answer is: %lld",result);
return 0;
}

