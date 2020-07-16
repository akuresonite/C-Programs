#include <stdio.h>
#include <math.h>
int main(void){
	typedef int coeff;
    coeff a,b,c;
    double D,x1,x2;
	printf("This program find the roots of the quadratic equation ax^2+bx+c=0\n");
	printf("Enter coefficients a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("you entered %d %d %d\n",a,b,c);
     D = ((b*b)-(4*a*c));
	printf("The discriminant is %f",D);
	
	if(D>0)
	{
		x1 = (-b + sqrt((b*b)-(4*a*c))) / 2*a;
		x2 = (-b - sqrt((b*b)-(4*a*c))) / 2*a;
	}
	else if(D==0)
	{
		x1 = x2 = -b/(2*a); 
	}
	else
	{
		x1 = -b /(2*a) + i(sqrt((b*b)-(4*a*c))/(2*a));
		x2 = -b /(2*a) - i(sqrt((b*b)-(4*a*c))/(2*a));
	}
	 
    printf("Root1 = %f and Root2 = %f",x1,x2);
return 0;    
}





