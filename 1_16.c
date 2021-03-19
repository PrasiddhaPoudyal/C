#include <stdio.h>
int main()
{
 int n1, n2, ans;
 printf("\nEnter two numbers: ");
 scanf("%d%d", &n1, &n2);
 ans = (n1 > n2) ? n1+n2 : n2-n1;
 printf("Answer is %d.\n", ans);
 return 0;
}

