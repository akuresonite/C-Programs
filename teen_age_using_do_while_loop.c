#include <stdio.h>
int main(){
 int age;
/*****using do while loop**********************************************************************************/
/* 
 char response;
do{  
  printf("Enter age:");
  scanf("%d",&age);
  
   if(age>=13&&age<=19)
     printf("Teen age\n");
   else
     printf("No, not teen age\n");
 
   printf("Do you want to continue? (y/n):");
   scanf(" %c",&response);//space before %
}while(response=='Y'||response=='y');
*/
/*****using for loop************************************************************************************/
 char response='Y';
 for(;response=='Y'||response=='y';){
 	printf("\nEnter age:");
  scanf("%d",&age);
  
   if(age>=13&&age<=19)
     printf("Teen age\n");
   else
     printf("No, not teen age\n");
 
   printf("\nDo you want to continue? (y/n):");
   scanf(" %c",&response);//space before %
 }
     
return 0;
}

