#include <stdio.h>
int main(void){
int a,b,c,d,max,min;
printf("Enter four integers: ");
scanf("%d %d %d %d",&a,&b,&c,&d);
max=((a>=b&&a>=c&&a>=d)?a:((b>=a&&b>=c&&b>=d)?b:((c>=a&&c>=b&&c>=d)?c:((d>=a&&d>=b&&d>=c)?d:printf(" ")))));
min=((a<=b&&a<=c&&a<=d)?a:((b<=a&&b<=c&&b<=d)?b:((c<=a&&c<=b&&c<=d)?c:((d<=a&&d<=b&&d<=c)?d:printf(" ")))));
/*if((a>=b&&a>=c&&a>=d)&&(a<=b&&a<=c&&a<=d))
  max=a;min=a;
if(b>=a&&b>=c&&b>=d)
  max=b;
if(c>=a&&c>=b&&c>=d)
  max=c;
if(d>=a&&d>=b&&d>=c)
  max=d;
*/
printf("largest is %d\nsmallest is %d",max,min);  
return 0;
}

