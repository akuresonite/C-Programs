#include <stdio.h>
int main(void){
int i,n;
printf("Set n:");
scanf("%d",&n);
 i=n;
 while(i>=0)
 {
 	printf("T minus %10d%10d%10d%10d\n",i,i,i,i);
    i--; 
 }
return 0;
}

