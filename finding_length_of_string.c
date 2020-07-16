#include <stdio.h>
int main()
{
	char string1[10000];
	printf("Enter you message: ");
	scanf("%[^\n]",string1);
	int i;
	for(i=0;string1[i]!='\0';i++);//'\0' for null character thats terminates string
	printf("Length of message is: %d",i);
	return 0;
}
