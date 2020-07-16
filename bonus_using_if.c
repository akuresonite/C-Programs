#include <stdio.h>
int main(void){
 int cy,yoj,yos,bonus=0;
printf("Enter current year and year of joining:");
scanf("%d%d",&cy,&yoj);
yos=cy-yoj;
if(yos>3){
	bonus=2500;
}
printf("your bonus is Rs. %d/-",bonus);	
return 0;
}
// here initially bonus is 0 unless yos>3
