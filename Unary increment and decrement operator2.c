#include <stdio.h>
int main(void){
int a=5,b=6,i;
i=++a * ++b;
//i=a++ * b++;
//i=--a * --b;
//i=a-- * b--;
printf("a=%d\tb=%d\ti=%d\n",a,b,i);
printf("a=%d\n",a++);
printf("a=%d\n",a);
printf("a=%d",++a);
return 0;
}

  
