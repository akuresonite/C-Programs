#include <stdio.h>
int main(void)
{
int n,rN=0,r,oN;
printf("Enter an integer: ");
scanf("%d",&n);
oN = n;
while(n!=0)
{
	r = n%10;
	rN = rN*10 + r;
	n = n/10;
}
if(oN = rN)
 printf("%d is a palindrome.",oN);
else 
 printf("%d is not a palindrome.",oN);

return 0;
}

