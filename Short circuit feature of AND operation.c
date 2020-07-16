#include <stdio.h>
int main(void){
	int a=-1,b=10,c;
	//int a=5,b=10,c;
	c=++a && ++b;//if ++a is false then ++b is never evelauted
	printf("a=%d\tb=%d\tc=%d",a,b,c);
return 0;
}
/*025 Short circuit feature
 of AND operation 
*/
