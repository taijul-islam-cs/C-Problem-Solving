//Write a C program to enter two numbers and perform all arithmetic operations.


#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter first numbers: ");
    scanf("%d", &num1);
     printf("Enter 2nd numbers: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("SUM = %d\n", sum);
    printf("SUB = %d\n", sub);
    printf("MULT= %d\n", mult);
    printf("DIV = %f\n", div);
    printf("MODULUS = %d", mod);

    return 0;
}
