#include <stdio.h>
int main(void){
 int k;
 char i,j;
 for(k=1;k<=7;k++)
 {
 	for(i='A';i<='G';i++)
    {
      printf("%c ",i);
    }
    for(j='F';j>='A';j--)
    {  
      printf("%c ",j);
      if(j=='A')
       printf("\n");
    }
 }

return 0;
}

