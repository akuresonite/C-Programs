#include <stdio.h>
int main(void)
{
 int i=1,j=1;
 while(i++<=100){
 	while(j++<=200){
 		if(j==150)
 		   break;
 		else
		  printf("%d%d\t",i,j);   
	 }
 }
return 0;
}
