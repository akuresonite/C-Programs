#include <stdio.h>
#include <string.h>
int main(){
	char string1[100];
	printf("Enter your message: ");
	//scanf("%[^\n]",string1);
	gets(string1);
	printf("%s",string1);
	return 0;
}
