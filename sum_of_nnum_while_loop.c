#include <stdio.h>
int main(void){
 int n,sum=0,i=1;
 printf("Enter num:");
 scanf("%d",&n);
 //**Method 3******************************
 while(i<=n)
 	sum+=i++;	   
 //a=a+b; <=> a+=b;
 //****************************************
 //**Method 2******************************
 //while(i<=n)
 //	sum=sum+i++;
 //****************************************
 //**Method 1******************************
 // while(i<=n){
 //	 sum=sum+i;
 //	 i++;
 //   }
 //****************************************
 printf("Sum of first %d natural numbers = %d\n",n,sum);
return 0;
}

