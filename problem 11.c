//Write a C program to find power of any number x ^ y.

#include <stdio.h>
#include <math.h>

int main()
{
    double base, expo, power;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);


    power = pow(base, expo);

    printf("Final answer : %.2lf",power);

    return 0;
}


