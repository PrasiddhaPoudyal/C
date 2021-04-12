#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
void main()  
{  
 int num1, num2;
 printf("Input any two numbers separated by comma : ");  
 scanf("%d,%d", &num1, &num2);   
 printf("The sum is:%d\n", add(num1, num2));  
 printf("The difference is:%d\n", sub(num1, num2));  
 printf("The product is:%d\n", mul(num1, num2));  
 printf("%d divided by %d is:%f\n", num1, num2, div(num1, num2));
}
int add(int a, int b)
    {
        return a + b;
    }
int sub(int a, int b)
    {
        return a - b;
    }
int mul(int a, int b)
    {
        return a * b;
    }
float div(int a, int b)
    {
    return (float)a / (float)b;
    }
