#include <stdio.h>
int main(void)
{
 int len=0;
 printf("Enter a message:");
/******** Method 1**********/
/* char ch; 
   ch=getchar();
   while(ch!='\n')
  {
  	len++;
  	ch=getchar();
  }
*/
/******** Method 2*********/
/*   while(getchar()!='\n')
  {
  	len++;
  }
*/
/******** Method 3********/
 for(len=0;getchar()!='\n';len++);
 printf("Your message was %d character(s) long.",len);
 return 0;
}
