#include<stdio.h>
int main()
{
    int a, b, c = 1, x;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    x = b;
    while(b!=0)
    {
        c = c * a;
        b = b - 1;
    }
    printf("%d raised to the power %d is %d",a,x,c);
}

