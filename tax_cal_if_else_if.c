#include <stdio.h>
int main(void){
double income,tax;
printf("enter your income $");
scanf("%lf",&income);
if(income<10000)
  tax=0.0;
else if(income>=10000&&income<20000)
  tax=income*0.1;
else if(income>=20000&&income<50000)
  tax=income*0.2;
else{
  tax=income*0.25;
  tax=tax+tax*0.1;       
}
printf("your payable tax is $%0.2lf",tax);
return 0;
}

