#include<stdio.h>
void main()
{
 int number, sum=0, i, n, count=0, num;
 printf("Enter a Number: ");
 scanf("%d", &number);
 num = number;
 while(num!=0)
 {
  n = num % 10;
  num = num / 10;
  sum = sum + n;
 }
 printf("Sum of digits of %d is %d\n", number, sum);
}

