#include <stdio.h>
int main(void){
 int num,digits;
 printf("Enter an integer not more than four digit:");
 scanf("%d",&num);
digits=(num>=0&&num<=9)?1:((num>=10&&num<=99)?2:((num>=100&&num<=999)?3:((num>=1000&&num<=9999)?4:printf(" "))));
/* if(num>=0&&num<=9)
   digits=1;
 if(num>=10&&num<=99)
   digits=2;
   if(num>=100&&num<=999)
   digits=3;
 if(num>=1000&&num<=9999)
   digits=4;// no {} used therefore if would contain only single statement
*/
 printf("There are %d digit in %d",digits,num);     
return 0;
}

