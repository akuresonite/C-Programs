#include <stdio.h>
int main(void){
 int i,num;
 //unsigned long long fac=1;
 long double fac=1;
 printf("Enter an integer [0,65]:");
 scanf("%d",&num);
/* 
 if(num==1)
  fac=1;
  
 if(num==0)
  fac=1;
   
 if(num>=2)
 {
  for(printf("%d!=",num),i=num;i>=1;i--)
   {
 	fac=fac*num;
 	num=num-1;
 	if(num==1)
 	 break;
   }
 }
 */
 for(i=1;i<=num;i++)
 {
 	fac=fac*i;
 }
printf("%d!=%llu",num,fac);
return 0;
}

