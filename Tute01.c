/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1,sub2;
  float avg;

  printf("Enter marks of Subject o1 :");
  scanf("%d", &sub1);

  printf("Enter marks of Subject o2 :");
  scanf("%d", &sub2);
  
  avg = (sub1 + sub2)/2;
  printf("average is %.2f",avg);

  return 0;
}

