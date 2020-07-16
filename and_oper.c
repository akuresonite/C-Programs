#include <stdio.h>
int main(void){
int age;
printf("enter ur age:");
scanf("%d",&age);
int teen=age>=13 && age<=19;
printf("Teenager %d",teen);
return 0;
}


