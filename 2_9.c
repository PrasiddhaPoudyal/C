#include <stdio.h>
int main()
{
int i,  c;
for (i = 5; i >= 1; i--)
{
 for (c = 1; c <= i; c++)
  printf("*");
 printf("\n");
}
return 0;
}

