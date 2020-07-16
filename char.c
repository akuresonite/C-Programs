#include <stdio.h>
  int main(){
    char a='T',b='E',c='N';
    //char also can be decleard individually
       /*  char a,b,c;
            a='T';
            b='E';
            c='N';
	   */
    printf("charat is %c%c%c\n",a,b,c);
    char c1,c2,c3,c4,c5,c6;
   // scanf("%c",&name);
   c1=getchar();
   c2=getchar();
   c3=getchar();
   c4=getchar();
   c5=getchar();
   c6=getchar();
    printf("typed\t%c%c%c%c%c%c",c1-32,c2-32,c3-32,c4-32,c5-32,c6-32);
      return 0;
}


