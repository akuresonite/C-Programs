#include <stdio.h>
int main(void){
	int n,sum,i;
	printf("enter num:");
	scanf("%d",&n);
	for(sum=0,i=1;i<=n;sum+=i,i++);	 
//	for(sum=0,i=1;i<=n;i++)
//	 sum+=i;
	printf("the sum of first %d natural numbers is %d\n",n,sum);
return 0;
}
