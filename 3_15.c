#include<stdio.h>
#include<ctype.h>
int main()
{
	int c=0;
	char str_char;
	char str[100];  
	printf("\n 		Convert a string to uppercase.\n");  
  printf("\n Input a string in lowercase : ");
  fgets(str, sizeof str, stdin);  
  printf("Here is the above string in UPPERCASE: ");
	while (str[c])
	{
		str_char=str[c];
		putchar (toupper(str_char));
		c++;
	}
}

