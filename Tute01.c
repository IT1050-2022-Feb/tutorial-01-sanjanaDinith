/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark, i, sum = 0;
  float avg;
  for(i=0; i<2; i++){
   printf("Enter mark %d :",i+1);
   scanf("%d", &mark);
   sum = sum + mark;
  }
   
  avg = sum / i - 1;
   printf("avg id %.2f", avg);
  return 0;
}

