#include <stdio.h>
void main()
{
   char s[1000], r[1000];
   int b, e, c = 0;
   printf("Input a string\n");
   gets(s);
   while (s[c] != '\0')
      c++;
   e = c - 1;
   for (b = 0; b < c; b++) {
      r[b] = s[e];
      e--;
   }
   r[b] = '\0';
   printf("Without using strrev => %s\n", r);
   printf("Using strrev => %s\n", strrev(r));
}

