#include <stdio.h>
int main(void){
int x,y,z;
char a1,a2;
printf("enter an integer:");
scanf("%d",&x);
printf("enter a chara:");
scanf(" %c",&a1);//mind space between "and%
printf("enter another integer:");
scanf("%d",&y);                     //this prob come when we take char after something else
printf("enter another chara:");
scanf(" %c",&a2);//mind space between "and%
printf("enter another integer:");
scanf("%d",&z);
printf("u have entered integers:%d,%d,%d,and\ncharacters:%c,%c",x,y,z,a1,a2);
return 0;	
}
