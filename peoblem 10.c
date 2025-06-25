//Write a C program to convert days into years, weeks and days.
#include<stdio.h>
int main(){

  int years,days,weeks;
  printf("Enter days : ");
  scanf("%d",&days);

   years = (days / 365);   // Ignoring leap year
   weeks = (days % 365) / 7;
   days  = days - ((years * 365) + (weeks * 7));

   printf("Years is  :%d\n",years);

   printf("Weeks is  :%d\n",years);

   printf("Days is   :%d\n",years);


  return 0;
}
