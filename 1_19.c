#include <stdio.h>
void main()
{
 int dividend, divisor = 5, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    remainder = dividend % divisor;
    printf("Remainder = %d", remainder);
}

