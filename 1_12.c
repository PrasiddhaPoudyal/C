#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, discriminant, r1, r2, rP, iP;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) 
    {
      r1 = (-b + sqrt(discriminant)) / (2 * a);
      r2 = (-b - sqrt(discriminant)) / (2 * a);
      printf("root1 = %.2lf and root2 = %.2lf\n", r1, r2);
    }
    else if (discriminant == 0) 
    {
      r1 = r2 = -b / (2 * a);
      printf("root1 = root2 = %.2lf;\n", r1);
    }
    else 
    {
      rP = -b / (2 * a);
      iP = sqrt(-discriminant) / (2 * a);
      printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", rP, iP, rP, iP);
    }
} 

