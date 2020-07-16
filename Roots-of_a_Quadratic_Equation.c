#include <stdio.h>
#include <math.h>
int main(void){
	typedef double inter;
	inter a,b,c,D,x1,x2,real,img;
	
	printf("This program find the roots of the quadratic equation ax^2+bx+c=0\n");
	printf("Enter coefficients a b c: ");
	scanf("%lf %lf %lf",&a, &b, &c);
	printf("you entered %lf %lf %lf\n",a,b,c);
     
	 D = ((b*b)-(4*a*c));
	printf("The discriminant is %.3lf\n\n",D);
	
	if(D>0)
	{
		x1 = (-b + sqrt(D)) / 2*a;
		x2 = (-b - sqrt(D)) / 2*a;
		printf("Root1 = %lf and Root2 = %lf",x1,x2);
	}
	else if(D==0)
	{
		x1 = x2 = -b/(2*a);
		printf("Root1 = Root2 = %lf",x1);
	}
	else
	{
		real = -b / (2*a);
		img =  sqrt(-D) / (2*a);
		printf("Root1 = %lf + %lfi and\nRoot2 = %lf - %lfi",real,img,real,img);
	}
return 0;    
}

