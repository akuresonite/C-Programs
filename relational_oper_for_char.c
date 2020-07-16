#include <stdio.h>
int main(void){
char a;
printf("enter a");
scanf("%c",&a);
printf("%c\n",(a>='a'?a:'!'));
int i;
printf("enter i");
scanf("%d",&i);
(i==1?printf("amit %d",i):printf("ashish %d",i));
return 0;
}

