#include<stdio.h>
void main()
{
int c,d,e;
printf("\nEnter the number at locations C:");
scanf("%d",&c);
printf("\nEnter the number at locations D:");
scanf("%d",&d);
e=c;
c=d;
d=e;
printf("\nNew number at locations C=%d",c);
printf("\nNew number at locations D=%d\n",d);
}

