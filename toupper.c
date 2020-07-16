#include<stdio.h>
#include<ctype.h>
int main(void){
	char ch;
	printf("Enter lower case character:");
	ch=getchar();
	printf("Uppercase is: %c\n",toupper(ch));
return 0;
}
