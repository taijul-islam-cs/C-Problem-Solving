//Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
int main(){

   float length, width, area;

   printf("Enter length of rectangle :");
   scanf("%f",&length);

   printf("Enter length of rectangle :");
   scanf("%f",&width);

   area =length*width;
   printf("Area is :%f",area);


   return 0;
}
