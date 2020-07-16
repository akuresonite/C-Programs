#include <stdio.h>
int main()
{
	char string1[100];
	printf("Enter your message: ");
	scanf("%[^\n]",string1);
	
	int i, alpha=0,space=0,num=0;
	for(i=0;string1[i]!='\0';i++)
	{
		if((string1[i]>='A' && string1[i]<='Z')||(string1[i]>='a' && string1[i]<='z'))
	       alpha++;
	    else if(string1[i]==' ')
		   space++;
    }
    printf("\nMessage has %d letters, %d spaces and %d numbers.",alpha,space,num);
    return 0;
}
