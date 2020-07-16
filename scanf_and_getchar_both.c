#include<stdio.h>
int main(void){
	int n;
	char ch;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter lower case character:");
	scanf("%c",&ch);
	//ch=getchar();
	printf("\nNumber is %d\nUppercase is: %c",n,toupper(ch));
return 0;
}
