//Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
int main(){

   float base,height,area;
   printf("Enter base of triangle :");
   scanf("%f",&base);

   printf("Enter height of triangle :");
   scanf("%f",&height);

   area = (base * height )/2;
   printf("Area is of triangle =%.2f sq, units",area);


   return 0;
}









