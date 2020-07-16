#include <stdio.h>
int main(void){
 int count;
 char response;
  for(count=1;count<=100;count++){
  	printf("Count=%d\n",count);
    printf("print next? enter Y/y to continue any other key to terminate\n");
    scanf(" %c",&response);
	if(response!='y'&&response!='Y') 
      break;
  }printf("Terminated at count %d",count);
return 0;
}

