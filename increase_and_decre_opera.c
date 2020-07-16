#include <stdio.h>
int main(void){
int i,j,k;
printf("enter three num:");
scanf("%d%d%d",&i,&j,&k);
for(i,j,k;i<=100,j<=100,k<=100;i++,j++,k++) {
printf("%d%d%d",i+=1,j+=2,k+=3);
}
return 0;
}
