#include <stdio.h>
int main(){
 int num,i;
 char response;
do{
printf("Enter a number:");
scanf("%d",&num);
i=2;

	        while(i<num){
	if(num%i==0){
		printf("%d not a prime number",num);
	    break;
	}
    i++;
}//printf("%d",i);
if(i==num)
 printf("%d is a prime number",num);
 printf("\nEnter Y/y to continue else to terminate:");
 scanf(" %c",&response);
}while(response=='Y'||response=='y');

return 0;
}

