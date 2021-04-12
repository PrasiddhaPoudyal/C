#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], i;
    printf("Enter a string: \n");
    gets(str);
    for(i=0; str[i]!='\0'; ++i);
       printf("Without using strlen, length= %d\n", i);
       printf("Using strlen, length= %d\n", strlen(str));
}

