//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include<stdio.h>
int main(){


   float celsius, fahrenheit;
   printf("Enter temperature in fahrenheit  :");
   scanf("%f",& fahrenheit);

   celsius = (fahrenheit - 32) * 5 / 9;
   printf("Celsius is : %.2f", celsius);


  return 0;

}
