// 2.3^4.5 = 42.44
#include <stdio.h>
#include <math.h>
int main()
{
    double base, exponent, result;
    printf("Enter a base number and expo: ");
    scanf("%lf%lf", &base,&exponent);
    //printf("Enter an exponent: ");
    //scanf("%lf", &exponent);
    // calculates the power
    result = pow(base, exponent);
    printf("%.1lf^%.1lf = %.20lf", base, exponent, result);
    return 0;
}

