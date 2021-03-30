#include <stdio.h>
int main()
{
 int a[10], i, s = 0, g, p = 1;
 float avg;
 printf("Enter 10 Numbers:\n");
     for(i=0; i<10; i++)
     {
          scanf("%d", &a[i]);
          s = s + a[i];
          avg = s / 10;
          p = p * a[i];
     }
     printf("Sum of Array Elements = %d\n", s);
     printf("Product of Array Elements = %d\n", p);
     printf("Average of Elements = %.2f\n", avg);
     g = a[0];
     for(i=0; i<10; i++)
          if(a[i]>g)
               g=a[i];
     printf("Greatest Element = %d\n", g);
     return 0;
}

