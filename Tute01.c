/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float Avg;

  printf("First subject marks : ");
  scanf("%d",&mark1);

   printf("Second subject marks : ");
  scanf("%d",&mark2);
  
  Avg=(mark1+mark2)/2.0;

  printf("The average is : %.2f",Avg);
  
  return 0;
}

