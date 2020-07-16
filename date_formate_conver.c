#include <stdio.h>
 int main(void)
 {  int mm,dd,yyyy;
    printf("Enter a date (mm/dd/yyyy):");
 	scanf("%d/%d/%d",&mm,&dd,&yyyy);
 	printf("you have entered a date:%d%2.2d%2.2d",yyyy,mm,dd);
 	
 	
 return 0;
 }
