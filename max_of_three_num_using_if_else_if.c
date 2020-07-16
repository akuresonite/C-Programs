//max of 3 num's
#include <stdio.h>
int main(void){
int a,b,c,max;
printf("enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
max=(a>b&&a>c)?a:(b>c?b:c);//using conditional ternary operator
/* if (a>b&&a>c)
     max=a;
  else if (b>c)
     max=b;
  else
     max=c;
*/
printf("max is %d",max);  
return 0;
}

