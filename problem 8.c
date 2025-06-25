//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
int main(){


   float celsius, fahrenheit;
   printf("Enter temperature in Celsius :");
   scanf("%f",&celsius);

   fahrenheit = (celsius * 9/5) +32;
   printf("%.2f Fahrenheit",  fahrenheit);


  return 0;

}
