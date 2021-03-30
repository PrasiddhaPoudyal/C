#include<stdio.h>
void main()
{
 int i, num, count_p=0, count_n=0, count_z=0;
 int arr[100];
 printf("Enter total numbers: ");
 scanf("%d", &num);
 for(i=0; i<num ;i++)
  scanf("%d", &arr[i]);
 for(i=0;i<num;i++)
 {
  if(arr[i]>0)
   count_p++;
  else if(arr[i]<0)
   count_n++;
  else if(arr[i]==0)
   count_z++;
  else
  {
   printf("Wrong Entry");
   break;
  }
 }
 printf("Positive Numbers: %d\n", count_p);
 printf("Negative Numbers: %d\n", count_n);
 printf("Zero Numbers: %d\n", count_z);
}

