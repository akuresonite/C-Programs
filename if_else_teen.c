 #include <stdio.h>
int main(void){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
// METHOD 1******using conditional ternary operator    
    (age>=10&&age<=19)?printf("you are a teenager\nstudy well"):printf("you are not a teenager");
// METHOD 2********************************************************************************
/*    if (age>=10&&age<=19)
      {
	   printf("you are a teenager\n");
	   printf("study well");
       }// {} is used when more than one statement is there 
    else
       printf("you are not a teenager");
*/  
    return 0;
}

