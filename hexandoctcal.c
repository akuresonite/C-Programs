#include<stdio.h>
  
  int main(){
  	
  	int x;
  	printf("enter x:");
  		scanf("%d",&x);
	  printf("decimal form of x is=%d\n",x);
  	  printf("octal form of x is=%o\n",x);
  	  printf("hexa form of x is=%x\n",x);
  	  printf("\n");
  	
	  int y;
	  	printf("enter y:");
  		scanf("%d",&y);
	  printf("decimal form of y is=%d\n",y);
  	  printf("octal form of y is=%o\n",y);
  	  printf("hexa form of y is=%x\n",y);
  	  printf("\n");
  	
      int z=x+y;
	  printf("the decimal form of sum is:%d\n",z);
	  printf("octal form of sum is=%o\n",z);
  	  printf("hexa form of sum  is=%x\n",z);
  	  
  }