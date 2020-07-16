#include <stdio.h>
int main(void)
{
 int i,n=0;
 printf("Enter n: ");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
   printf("%5d = %5c\n",i,i);

return 0;
}

