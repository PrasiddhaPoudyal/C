#include <stdio.h>
#include <math.h>
int main()
{
int radius;
printf("Enter radius of sphere: ");
scanf("%d", &radius);
float pi = M_PI;
double volume= 4 / 3 * pi * pow(radius, 3);
printf("Volume of the sphere=%f", volume);
}

