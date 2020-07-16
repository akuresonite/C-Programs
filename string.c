 #include <stdio.h>
 #include <string.h>
 int main(){
    char string1[80]="Welcome, ";
 	char string2[80];
//* string deleration***************** 	
 	strcpy(string2,"Ashish");
//* string length********************* 	
    int i=0,j=0;
    i = strlen(string1);
    j = strlen(string2);
 	printf("%s%s",string1,string2);
 	printf("\nLength is: %d",i+j);
 	return 0;
 }
 
