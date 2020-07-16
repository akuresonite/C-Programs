#include <stdio.h>
int main(void)
{
int n,rN=0,r;
printf("Enter an integer: ");
scanf("%d",&n);
while(n!=0)
{
	r = n%10;
	rN = rN*10 + r;
	n = n/10;
}
printf("Reversed number is %d",rN);
return 0;
}

