#include <stdio.h>
int main(void){
int num=1,i,fac=1;
float sum;
for(sum=0,i=0;i<=7;i++)
 {
 	for(fac=1;fac>=num;fac++)
	{
     sum=sum + ((num)/(fac));
     num=num+1;
     if(num==7)
      break; 
    }
}
return 0;
}

