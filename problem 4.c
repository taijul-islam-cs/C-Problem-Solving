//Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
int main(){

  float length, width, perimeter;

  printf("Enter length of rectangle:");
  scanf("%f",&length);

  printf("Enter width of rectangle:");
  scanf("%f",&width);

  perimeter =2*(length + width);
  printf("perimeter of rectangle :%f",perimeter);


  return 0;
}
