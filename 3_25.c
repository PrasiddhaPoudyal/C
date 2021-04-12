#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   int i, j, c = 10;
   char str[25][25],temp[25];
   clrscr();
   puts("Enter name of students one by one:\n");
   for(i=0;i<=c;i++)
      gets(str[i]);
   for(i=0;i<=c;i++)
      for(j=i+1;j<=c;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("\n\nSorted Names:\n");
   for(i=0;i<=c;i++)
      puts(str[i]);
   return 0;
getch();
}

