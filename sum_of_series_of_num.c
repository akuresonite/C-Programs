#include <stdio.h>
int main(void){
 int n,sum=0;
printf("This program sums a series of integer\nEnter integer (0 to terminate): ");
scanf("%d",&n);
while(n>0)
 {
 	sum+=n;
	scanf("%d",&n);
 }
 printf("sum=%d",sum);
return 0;
}

