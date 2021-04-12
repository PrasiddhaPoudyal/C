#include <stdio.h>
#include <string.h>
void main()
{
  char a[100], b[100];
  printf("Enter a string to check if it's a palindrome\n");
  gets(a);
  strcpy(b, a);
  strrev(a);
  if (strcmp(a, b) == 0)
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");
}

