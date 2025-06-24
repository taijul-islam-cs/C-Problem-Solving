//Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include<stdio.h>
int main(){

   float cm,meter, km;
   printf("enter length in cintimeter :");
   scanf("%f",&cm);

   meter=cm/100.0;
   km = cm/100000.0;

   printf("length is meter =% .2f m\n",meter);
   printf("length in kilometer = %.2f km\n",km);


  return 0;
}
