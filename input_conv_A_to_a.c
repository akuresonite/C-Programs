#include <stdio.h> //#include <stdio.h> can be ommited
                
 int main()
 {
 	char ach,bch;
 	printf("enter lower cases only:");
 	//scanf("%c %c",&ach,&bch);
	 ach=getchar();
	 bch=getchar();
	 
 	//printf("%c=%d",ach,ach);
 	printf("%c  %c  ",ach-32,bch-32);
 	return 0;
 }
