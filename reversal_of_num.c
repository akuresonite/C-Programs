#include <stdio.h>
int main(void){
int i;
printf("enter a two-digit num:");
scanf("%d",&i);
printf("The reversal is: %d%d",i%10,i/10);
return 0;
}
