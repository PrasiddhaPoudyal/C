#include <stdio.h>
void main()
{
int a[10],i,j,temp;
printf("Enter the 10 Numbers:\n");
for(i=0; i<10; i++)
{
 printf("Enter a value:");
 scanf("%d", &a[i]);
}
for(i=0; i<9; i++)
{
 for(j=0; j<9; j++)
 {
  if(a[j]>a[j+1])     
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 } 
}
printf("Given numbers in ascending order:\n");
for(i=0;i<10;i++)
 printf("%d\n",a[i]);
}

