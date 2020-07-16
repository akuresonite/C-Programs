#include <stdio.h>
int main(void){
 int digits=0,num;
printf("Enter a non_negative integer:");
scanf("%d",&num);
do{ printf("num=%10d,\tdigits=%10d,\t%d/10\n",num,digits,num);
	num/=10;
	digits++;
	
  }while(num>0);

printf("There are %d digits\n",digits);  
return 0;
}

