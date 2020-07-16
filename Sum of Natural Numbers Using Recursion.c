#include <stdio.h>
int addNumber(int n)
{
    if(n != 0)
        return n + addNumber(n-1);
    else
        return n;
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("\nThe sum of first %d positive integers is %d\n\n",num,addNumber(num));
    return 0;
}
