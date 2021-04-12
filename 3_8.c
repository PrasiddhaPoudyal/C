#include <stdio.h>
void main()       
{
	int a[10],i,j;
  printf("Enter 10 numbers: ");      
  for(i = 0; i < 10; i++)
    scanf("%d",&a[i]);
	for (int i = 0; i < 10; i++)        
  {
		for (int j = 0; j < 10; j++)      
		{
			if (a[j] > a[i])     
      {
				int tmp = a[i];    
				a[i] = a[j];       
				a[j] = tmp;        
			}  
		}
	}
	printf("\n\nAscending : ");                
	for (int i = 0; i < 10; i++)                
	{
		printf(" %d ", a[i]);
	}
}

