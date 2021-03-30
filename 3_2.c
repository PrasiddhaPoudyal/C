#include <stdio.h>
int main()
{
 int arr[10];
 int *pa;    
 int  i;
 pa=&arr[0]; 
 printf("Enter array elements:\n");
 for(i=0;i < 10; i++)
 {
  printf("Enter element %d: ",i+1);
  scanf("%d",pa+i);
 }
 printf("\nEntered array elements are:");
 printf("\nAddress\t\tValue\tVariable Name\n");
 for(i=0;i<10;i++)
 {
  printf("%u\t%d\tarr[%d]\n", (pa+i), *(pa+i), i);
 }
 return 0;
}

