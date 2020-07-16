#include <stdio.h>
#include <stdlib.h>
int main(void){
    int k,i,l;
    while(1){
    	printf("Enter seed integer only:");
    scanf("%d",&l);
    srand(l);
    for(i=1;i<=5;k=rand(),i++){
 	   k=rand();
       printf("%d\t",k);
    }
	}
return 0;
}

