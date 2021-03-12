#include<stdio.h>
int main()
{
    float edge, area;
    printf("Enter the length of edge of the cube : ");
    scanf("%f",&edge);
    area = 6 * pow(edge , 2);
    printf("Surface area of the cube is = %f ",area);
}
