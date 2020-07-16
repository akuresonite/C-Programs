#include <stdio.h>
int main(void){
 int num,i=2;
printf("Enter a number:");
scanf("%d",num);
while(i<num){
	if(num%i==0){
		printf("Not a prime number");
	    break;
	}
    i++;
}//printf("%d",i);
if(i==num)
 printf("Prime number");
return 0;
}

