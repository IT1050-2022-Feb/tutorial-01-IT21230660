/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

     int mark1,mark2;
     int Total=0,Avg;

   printf("Enter subject 1 mark:");
   scanf("%d",&mark1);
   printf("Enter subject 2 mark:");
   scanf("%d",&mark2);

   Total=mark1+mark2;
  Avg=Total/2;

  printf("Average of the two marks: %d",Avg);
  
  return 0;
}

