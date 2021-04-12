#include <stdio.h>
float product(float i, int j)
{
	float pr;
	pr = i*j;
	return pr;
}
int  main( )
{
	float a, p;
	int b;
	printf("Enter Float Value :");
	scanf("%f",&a);
	printf("\nEnter Integer Value :");
	scanf("%d",&b);
	p = product(a,b);
	printf("\nThe product is %.2f\n", p);
	return 0;
}

