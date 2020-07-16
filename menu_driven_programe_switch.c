#include <stdio.h>
#include <stdlib.h>
int main()
{
 int num,choice,i=1,j=2;
 long int fac=1;
 printf("Enter a num:");
 scanf("%d",&num);
 while(1)
  {
    printf("\n\n1. Factorial");
    printf("\n2. Prime");
    printf("\n3. Odd/Even");
    printf("\n4. Exit");
    printf("\nYour choice? ");
    scanf("%d",&choice);
    switch(choice)
     {
       case 1:
       	for(fac=1,i=1;i<=num;i++)
       	 fac*=i;
		 printf("The factorial of %d is %ld",num,fac);
       	break;
       case 2:
       	for(j=2;j<num && num%j!=0;j++);
       	 if(j<num)
       	  printf("%d is divisible by %d",num,j);
       	 else
       	  printf("%d is a prime number",num);
       	break;  
       case 3:
       	if(num%2==0)
       	 printf("%d is even",num);
       	else
       	 printf("%d is odd",num);
       	break;
       case 4:
       	 goto end;
      	 
     }
  }
  end: 
      printf("Bye Bye");
 return 0;
}
