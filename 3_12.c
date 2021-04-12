#include<stdio.h>
void main()
{
int a[10], i, j, temp;
printf("Enter Marks of 10 students:\n");
for(i=0; i<10; i++)
{
    printf("Student%d's marks?: ", i+1);
    scanf("%d", &a[i]);
}
for(i=0;i<9;i++)
{
    for(j=0;j<9;j++)
    {
        if(a[j]>a[j+1])     
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }   
}
printf("Top 5 marks are:\n");
for(i=9; i>4; i--)
    printf("%d\n",a[i]);
}

