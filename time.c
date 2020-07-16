#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    int k,i;
    long t;
    t=time(NULL);
    srand(t);
    for(i=1;i<=5;k=rand(),i++){
 	   k=rand()%100;
       printf("%d\t",k);
    }
	
return 0;
}

