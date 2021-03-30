#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is cube of %d.", num * num * num, num);
    else
        printf("%d is square of %d.", num * num, num);
    return 0;
}

