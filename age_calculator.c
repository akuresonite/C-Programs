#include <stdio.h>
int main(void){
int dd,mm,yyyy;
printf("Enter your DOB(dd/mm/yyyy):");
scanf("%d/%d/%d",&dd,&mm,&yyyy);
int dd1,mm1,yyyy1;
printf("Enter today's date(dd/mm/yyyy):");
scanf("%d/%d/%d",&dd1,&mm1,&yyyy1);
printf("Your DOB is %2.2d/%2.2d/%d and today is %2.2d/%2.2d/%d",dd,mm,yyyy,dd1,mm1,yyyy1);
//age=dd+(mm*)
return 0;	
}
