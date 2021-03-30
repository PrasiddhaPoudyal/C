#include <stdio.h>
struct student
{
 int roll_no, marks;
 char name[25];
}stud[35],t; 
void main()
{
 int i, j;
 printf("Enter student info as roll_no, marks:\n");
 for(i = 0; i < 33; i++)
  scanf("%d%d", &stud[i].roll_no, &stud[i].marks);
 for(i=0; i < 33; i++)
 {
  for(j=0; j < 32; j++)
  {
   if(stud[j].marks < stud[j+1].marks)
   {
    t = stud[j];
    stud[j] = stud[j+1];
    stud[j+1] = t;
   }
  }
 }
 printf("\nStudent info => marks from highest to lowest\n");
 printf("\nROLL_NO\t\tMARKS\n");
 for(i = 0; i < 33; i++)
  printf("%d\t\t%d\n",stud[i].roll_no,stud[i].marks);
}

