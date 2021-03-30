#include <stdio.h>
int main()
{ 
	int number = 10, sum = 0;
	printf("Numbers from 10 to 1: \n");
	while(number>0)
	{
		printf("%d ",number);
    sum += number;
		number--;
	}
  printf("\nTheir sum = %d\n", sum);
	return 0;
}

