#include <stdio.h>
#include <string.h>
int main()
{  
    char c[100], d;
    int i;
    printf("Enter a word: ");
    scanf("%s", c); 
    for (i=0; i < strlen(c); i++)
        printf("ASCII value of %c = %d\n", c[i], c[i]);
    return 0;
}

