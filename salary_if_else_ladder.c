#include <stdio.h>
int main(void){
char gen,qual;
int yos,sal;
printf("Enter Gender (M/F), Qualification (G/P), year of service\n");
scanf("%c %c %d",&gen,&qual,&yos);
if(gen=='M'&&yos>=10&&qual=='P')//**** for char M,F,G,P they are used in single inverted commas
  sal=15000;// '' is used to declared char
else if(gen=='F'&&yos>=10&&qual=='P')
  sal=12000;  
else if ((gen=='M'&&yos>=10&&qual=='G')||(gen=='M'&&yos<10&&qual=='P')||(gen=='F'&&yos<10&&qual=='P'))
  sal=10000;
else if (gen=='F'&&yos>=10&&qual=='G')
  sal=9000;
else if (gen=='M'&&yos<10&&qual=='G')
  sal=7000;
else if  (gen=='F'&&yos<10&&qual=='G')
  sal=6000;//** we use else if in place of else cause we have to enter a statement in it

printf("your salary is Rs. %d/-",sal);        

}

