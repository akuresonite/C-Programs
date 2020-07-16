#include<stdio.h>
int main(void)
{
	int i=2;
	for(i=2;i<=10;i++)
	{
	printf("|%4.4d|%-5.5d|\n",i,i);
	}
	int j=3;
	printf("%d\n",j);
	float k=423.34;
	printf("%e\n%f\t%g\t\"\"\"""ashihs\"\"\"",k,k,k);
	printf("/\\/\\/\\|\n");
	int l;
	float f;
	f=l=33.334; // l=33 and f=33.o
	printf("%d\t%f",l,f);
	return 0;
}
