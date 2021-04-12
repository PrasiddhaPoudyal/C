#include <stdio.h>
int main()
{
 char str[100];
 int cL, cU, cS, c;
 cL = cU = cS = 0;
 printf("Enter a string: ");
 gets(str);
 for(c=0;str[c]!=NULL;c++)
 {
    if(str[c]>='A' && str[c]<='Z')
        cU++;
    else if(str[c]>='a' && str[c]<='z')
        cL++;   
    else if(str[c] = ' ') 
        cS++;
 }
 printf("Total Upper case characters: %d\n", cU);
 printf("Total Lower Case characters: %d\n", cL);
 printf("Total Space characters: %d\n", cS);
 return 0;
}

