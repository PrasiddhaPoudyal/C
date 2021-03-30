#include <stdio.h>
void sort_numbers_ascending(int number[])
{
 int temp, i, j, k;
 for (j = 0; j < 10; j++)
 {
  for (k = j + 1; k < 10; k++)
  {
   if (number[j] > number[k])
   {
    temp = number[j];
    number[j] = number[k];
    number[k] = temp;
   }
  }
 }
 printf("Numbers in ascending order:\n");
 for (i = 0; i < 10; i++)
  printf("%d\n", number[i]);
}
void main()
{
   int i, number[10];
   printf("\nEnter the numbers one by one:\n");
   for (i = 0; i < 10; i++)
   scanf("%d", &number[i]);
   sort_numbers_ascending(number);
}

