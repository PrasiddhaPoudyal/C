#include<stdio.h>
void main()
{
 int a[10], i, big, small;
 printf("\n\nEnter the 10 elements of the array: \n\n");
 for(i = 0; i < 10; i++)
  scanf("%d", &a[i]);
 big = a[0];
 small = a[0];
 for(i = 1; i < 10; i++)
 {
  if(big < a[i])
   big = a[i];
  if(small>a[i])
   small = a[i];
 }
 printf("\n\nThe largest element is: %d", big);
 printf("\n\nThe smallest element is: %d", small);
}

