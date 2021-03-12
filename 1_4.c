#include<stdio.h>
main()
{
	int l, b, ra, rp;
	printf("Enter the length of rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);
	ra = l * b;  
    rp = 2 * (l + b);    
    printf("\nThe area of the rectangle: %d", ra);
    printf("\nThe perimeter of the rectangle: %d", rp);
}
