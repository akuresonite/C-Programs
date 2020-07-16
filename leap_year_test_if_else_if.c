#include <stdio.h>
int main(void){
int year;
printf("Enter a year:");
scanf("%d",&year);
// METHOD 1*************************************************************************************************************
/*
if((year%4==0&&year%100!=0)||(year%4==0&&year%400==0))
   printf("Yes, It's a leap year");
else
   printf("No, It's not a leap year");
*/
// METHOD 2*************************************************************************************************************
/*if(year%4==0)
    if(year%100==0)
        if(year%400==0)
            printf("Yes, It's a leap year");
        else
	        printf("No, It's not a leap year");  
    else
        printf("Yes, It's a leap year");
else
    printf("No, It's not a leap year");
*/
// METHOD 3*************************************************************************************************************
((year%4==0&&year%100!=0)||(year%4==0&&year%400==0))?printf("Yes, It's a leap year"):printf("No, It's not a leap year");
//**********************************************************************************************************************
return 0;
}

